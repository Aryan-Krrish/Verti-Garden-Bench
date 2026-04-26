````md
# Verti-Garden Bench 🌱🪑
## Smart Autonomous Hydroponic Urban Bench

> **Projet développé par les élèves du Lycée Paul Le Rolland**  
> dans le cadre des **Olympiades de Sciences de l’Ingénieur**  
> **Thème : Innovation & Ville du Futur**

---

# Présentation

**Verti-Garden Bench** est un projet de **banc urbain intelligent, autonome, connecté et écologique**, imaginé pour transformer le mobilier urbain classique en une **station multifonction intelligente**.

Le projet combine :

- mobilier urbain innovant
- agriculture hydroponique
- automatisation météo
- IoT / systèmes embarqués
- pilotage à distance
- supervision web
- gestion énergétique intelligente
- modularité mécanique
- maintenance simplifiée

L’objectif est simple :

Créer une solution urbaine capable de **végétaliser la ville**, **optimiser l’espace public**, **réduire la consommation de ressources**, et **intégrer l’intelligence embarquée dans le mobilier quotidien**.

---

# Contexte du concours

Ce projet a été développé dans le cadre des **Olympiades de Sciences de l’Ingénieur**, autour du thème :

# **Innovation & Ville du Futur**

Verti-Garden Bench répond directement à cette problématique grâce à une approche mêlant :

- urbanisme durable
- innovation technologique
- automatisation intelligente
- écologie urbaine
- agriculture connectée
- maintenance simplifiée
- autonomie locale
- Smart City / IoT

## Notre vision

Imaginer une ville :

🌱 plus verte  
⚡ plus autonome  
🧠 plus intelligente  
💧 plus économe en ressources  
🏙️ mieux intégrée à la vie quotidienne  

Verti-Garden Bench transforme un simple banc public en une **plateforme urbaine intelligente**, capable de :

- produire des végétaux localement
- s’adapter à la météo
- économiser l’énergie
- automatiser sa maintenance
- surveiller son environnement
- offrir une interface numérique de contrôle
- participer activement à la végétalisation des espaces publics

---

# Concept du projet

Au centre :

## Smart Bench
Un banc urbain intelligent servant de cœur au système.

Autour :

## Dual Hydroponic Modules
Deux systèmes hydroponiques indépendants entourent le banc.

Chaque module possède :

- sa propre pompe
- sa propre alimentation hydraulique
- ses cycles automatiques
- sa maintenance indépendante

Le tout forme une **micro-station autonome de culture urbaine**.

---

# Architecture embarquée

Le système repose sur **2 ESP32**.

## ESP32 Master

Le microcontrôleur principal gère :

- logique système
- lecture capteurs
- store automatique
- serveur web
- dashboard utilisateur
- dashboard technicien
- ventilation
- humidification
- LEDs intelligentes
- hydroponie 1
- communication avec ESP32 secondaire

---

## ESP32 Secondary Node

Le second ESP32 gère :

- hydroponie 2
- automatisation pompe 2
- timers indépendants
- exécution commandes distantes
- synchronisation système

---

# Protocoles utilisés

## ESP-NOW
Communication directe entre ESP32.

Utilisé pour :

- commande pompe 2
- timers
- synchronisation
- échanges temps réel

Avantages :

- faible latence
- faible consommation
- sans routeur
- communication fiable

---

## Wi-Fi AP + STA
Création d’un réseau local autonome.

Permet :

- connexion smartphone
- accès maintenance
- supervision locale
- accès site web embarqué

---

## HTTP REST API
Communication interface web ↔ ESP32.

Permet :

- monitoring temps réel
- récupération capteurs
- commandes
- pilotage système

---

## I2C
Communication numérique capteurs.

Utilisé pour :

- BMP280

Mesures :

- température
- pression atmosphérique

---

## PWM
Contrôle :

- moteur
- pompes
- LEDs

Permet :

- variation vitesse
- contrôle précis
- optimisation énergétique

---

## Hardware Interrupts
Interruptions temps réel.

Utilisées pour :

- capteur vent

Permet :

- haute précision
- réaction instantanée

---

# Capteurs

## Rain Sensor
Détection :

- humidité
- pluie légère
- pluie modérée
- pluie forte

---

## Wind Sensor
Mesure :

- vitesse
- rafales
- seuil danger

---

## BMP280
Mesure :

- température
- pression

Utilité :

- météo locale
- prédiction perturbations
- logique climatique

---

## LDR Light Sensor
Mesure :

- jour
- nuit
- forte luminosité

Utilité :

- automatisation LEDs
- gestion énergie
- détection soleil intense

---

# Actionneurs

## Automatic Shade System
Store motorisé intelligent.

Fonctions :

- ouverture automatique
- fermeture automatique
- protection météo
- régulation lumière

---

## Dual Pump System
2 pompes indépendantes.

Pompe 1 :

- locale
- timer autonome
- override manuel

Pompe 2 :

- distante
- contrôlée via ESP-NOW
- timer configurable
- automatisation indépendante

---

## Smart Lighting
LED WS2812B.

Fonctions :

- allumage automatique la nuit
- extinction automatique le jour
- faible consommation
- pilotage logiciel

---

## Ventilation System
Fonctions :

- refroidissement
- circulation air
- confort thermique

---

## Humidification System
Fonctions :

- humidification locale
- microclimat végétal
- meilleure croissance

---

# Reverse Engineering Hydroponics

Les 2 systèmes hydroponiques ont été conçus pour être :

- modulaires
- démontables
- remontables
- reproductibles
- réparables pièce par pièce
- maintenance facile

---

# Interface Web

## Dashboard Utilisateur

Affichage :

- température
- pression
- pluie
- vent
- luminosité
- LEDs
- store
- humidification
- ventilation
- hydroponie

---

## Dashboard Technicien

Accès sécurisé.

Permet :

- contrôle moteur
- contrôle pompes
- timers
- LEDs
- ventilation
- monitoring avancé
- maintenance

---

# Technologies / Libraries

```cpp
#include <WiFi.h>
#include <WebServer.h>
#include <Wire.h>
#include <esp_now.h>
#include <Seeed_BMP280.h>
#include <FastLED.h>
```

Utilisation :

- WiFi → réseau local embarqué
- WebServer → interface web
- Wire → I2C
- ESP-NOW → communication ESP32
- BMP280 → météo
- FastLED → éclairage intelligent

---

# Open Source Version

Ce dépôt contient une **version simplifiée publique** du firmware.

La version complète inclut :

- code embarqué complet
- interface web complète
- logique météo avancée
- automatisation complète
- architecture ESP-NOW complète
- dashboard technicien avancé
- monitoring avancé

---

# Full Source Code Access

Pour obtenir le **code source complet**, contacter :

## Aryan Kumar
📧 **ARYANKUMAR-2007@OUTLOOK.COM**

> **Please contact directly for full firmware access / complete project source code.**

---

# Credits

Projet conçu et développé par les élèves du **Lycée Paul Le Rolland**  
pour les **Olympiades de Sciences de l’Ingénieur**  
**Thème : Innovation & Ville du Futur**
````
