# 🌱 Verti-Garden Bench

## Smart Autonomous Hydroponic Urban Bench

Projet développé par les élèves du **Lycée Paul Le Rolland**  
dans le cadre des **Olympiades de Sciences de l’Ingénieur**

---

# 🎯 Thème du concours

## Innovation & Ville du Futur

Ce projet explore la création d’un mobilier urbain intelligent intégré dans une logique de **Smart City**, combinant :

- écologie urbaine
- automatisation
- IoT
- agriculture hydroponique
- gestion énergétique intelligente

---

# 📌 Présentation du projet

**Verti-Garden Bench** est un banc urbain intelligent capable de :

- gérer deux systèmes hydroponiques indépendants
- s’adapter automatiquement à la météo
- contrôler un store motorisé
- gérer un éclairage intelligent
- activer une ventilation automatique
- surveiller l’environnement en temps réel
- être contrôlé via une interface web
- offrir un mode technicien sécurisé

---

# 🧠 Fonctionnement général

Le système repose sur :

- 2 ESP32 connectés
- des capteurs environnementaux
- une interface web locale
- une communication sans fil ESP-NOW

---

# 📡 Protocoles utilisés

## ESP-NOW
Communication directe entre les 2 ESP32 :
- faible latence
- sans WiFi externe
- contrôle de la pompe secondaire

## WiFi (Access Point)
Création d’un réseau local :
- accès au site web
- contrôle utilisateur
- mode technicien

## HTTP REST API
Permet :
- lecture des capteurs
- contrôle du système
- communication interface ↔ ESP32

## I2C
Utilisé pour le capteur :
- température
- pression (BMP280)

## PWM
Utilisé pour :
- moteur du store
- pompes
- intensité LED

---

# 🧩 Composants principaux

## 🌧 Capteur de pluie
Détecte :
- pluie faible
- pluie forte
→ déclenche la fermeture du store

## 🌬 Capteur de vent
Mesure la vitesse du vent :
→ protection automatique du système

## 🌡 BMP280
Mesure :
- température
- pression atmosphérique

## 🌞 LDR
Détecte la luminosité :
→ contrôle automatique des LEDs

## 🪴 Système hydroponique x2
Chaque système contient :
- une pompe indépendante
- un cycle automatique
- un contrôle séparé

## 🔆 LEDs WS2812B
- éclairage automatique de nuit
- extinction automatique de jour

## 💨 Ventilateur
- régulation thermique automatique

## 💧 Humidificateur
- améliore les conditions de croissance

## 🪟 Store motorisé
- ouverture/fermeture automatique selon météo

---

# 🌐 Interface Web

## Mode utilisateur
- visualisation des capteurs
- contrôle du système
- suivi temps réel

## Mode technicien
- contrôle complet
- réglage des pompes
- configuration moteur
- maintenance système

---

# ⚙️ Architecture

- ESP32 Master : contrôle principal
- ESP32 Slave : gestion hydroponie 2
- communication ESP-NOW
- serveur web embarqué

---

# 🔐 Accès code complet

⚠️ Le code présenté ici est une version simplifiée.

Le **code complet du projet** est disponible uniquement sur demande.

📧 Contact :
**ARYAN KUMAR**  
**ARYANKUMAR-2007@OUTLOOK.COM**

---

# 🏫 Crédit

Projet réalisé par les élèves du **Lycée Paul Le Rolland**  
dans le cadre des **Olympiades de Sciences de l’Ingénieur**
