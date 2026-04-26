```cpp
/*
===========================================================
VERTI-GARDEN BENCH
Public Demonstration Code (Simplified Version)

Project by students of Lycée Paul Le Rolland
Olympiades de Sciences de l’Ingénieur

For full source code access:
ARYANKUMAR-2007@OUTLOOK.COM
===========================================================
*/

#include <WiFi.h>
#include <WebServer.h>
#include <Wire.h>
#include <esp_now.h>
#include <Seeed_BMP280.h>
#include <FastLED.h>

// ===== Libraries Objects =====
WebServer server(80);
BMP280 bmp280;
CRGB leds[14];

// ===== System States =====
bool rainDetected = false;
bool strongWind = false;
bool dayMode = true;
bool ledState = false;
bool fanState = false;
bool pump1State = false;
bool pump2State = false;
bool shadeOpened = false;

// ===== Environmental Data =====
float temperature = 0;
float pressure = 0;
float windSpeed = 0;
int humidityLevel = 0;

// ===== Wireless Communication Packet =====
typedef struct {
  bool autoMode;
  bool forceOn;
  uint32_t onTime;
  uint32_t offTime;
} PumpCommand;

// ===========================================================
// NETWORK INITIALIZATION
// ===========================================================
void initNetwork() {
  WiFi.mode(WIFI_AP_STA);
  WiFi.softAP("Verti-Garden Bench", "12345678");

  if (esp_now_init() == ESP_OK) {
    Serial.println("ESP-NOW communication ready");
  } else {
    Serial.println("ESP-NOW initialization failed");
  }

  Serial.println("Wireless system online");
}

// ===========================================================
// SENSOR UPDATE
// ===========================================================
void readSensors() {
  // Demo simulation values
  temperature = random(18, 37);
  pressure = random(990, 1030);
  windSpeed = random(0, 45);
  humidityLevel = random(0, 100);

  rainDetected = humidityLevel > 65;
  strongWind = windSpeed > 20;
  dayMode = random(0, 2);
}

// ===========================================================
// WEATHER ANALYSIS
// ===========================================================
void analyzeEnvironment() {
  if (rainDetected || strongWind) {
    shadeOpened = true;
  } else {
    shadeOpened = false;
  }

  fanState = temperature > 28;
}

// ===========================================================
// HYDROPONIC MANAGEMENT
// ===========================================================
void updateHydroponics() {
  pump1State = true;

  PumpCommand cmd;
  cmd.autoMode = true;
  cmd.forceOn = true;
  cmd.onTime = 5000;
  cmd.offTime = 5000;

  esp_now_send(nullptr, (uint8_t*)&cmd, sizeof(cmd));
  pump2State = true;
}

// ===========================================================
// SMART LIGHTING
// ===========================================================
void updateLighting() {
  ledState = !dayMode;

  fill_solid(
    leds,
    14,
    ledState ? CRGB(255, 180, 80) : CRGB::Black
  );

  FastLED.show();
}

// ===========================================================
// WEB API
// ===========================================================
void handleAPI() {
  String json = "{";
  json += "\"temperature\":" + String(temperature) + ",";
  json += "\"pressure\":" + String(pressure) + ",";
  json += "\"wind\":" + String(windSpeed) + ",";
  json += "\"rain\":" + String(rainDetected ? "true":"false") + ",";
  json += "\"fan\":" + String(fanState ? "true":"false") + ",";
  json += "\"lighting\":" + String(ledState ? "true":"false") + ",";
  json += "\"pump1\":" + String(pump1State ? "true":"false") + ",";
  json += "\"pump2\":" + String(pump2State ? "true":"false") + ",";
  json += "\"shade\":" + String(shadeOpened ? "true":"false");
  json += "}";

  server.send(200, "application/json", json);
}

// ===========================================================
// WEB SERVER
// ===========================================================
void setupWebServer() {
  server.on("/api", handleAPI);
  server.begin();

  Serial.println("Web interface online");
}

// ===========================================================
// SETUP
// ===========================================================
void setup() {
  Serial.begin(115200);

  Wire.begin();

  bmp280.init();

  FastLED.addLeds<WS2812B, GRB>(leds, 14);
  FastLED.clear();
  FastLED.show();

  initNetwork();
  setupWebServer();

  Serial.println("Verti-Garden Bench system ready");
}

// ===========================================================
// MAIN LOOP
// ===========================================================
void loop() {
  server.handleClient();

  readSensors();
  analyzeEnvironment();
  updateHydroponics();
  updateLighting();

  delay(1000);
}
```
