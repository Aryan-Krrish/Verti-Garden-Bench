# 🌱 Verti-Garden Bench

## Smart Autonomous Hydroponic Urban Bench

Projet développé par les élèves du **Lycée Paul Le Rolland**  
dans le cadre des **Olympiades de Sciences de l’Ingénieur**

---

# 🎯 Thème du concours

## Innovation & Ville du Futur

Ce projet s’inscrit dans une vision de **Smart City durable**, combinant :

- innovation urbaine
- IoT et systèmes embarqués
- agriculture hydroponique
- énergie renouvelable
- automatisation intelligente

---

# 📌 Présentation du projet

**Verti-Garden Bench** est un banc urbain intelligent et autonome capable de :

- gérer 2 systèmes hydroponiques indépendants
- surveiller la météo en temps réel
- s’adapter automatiquement aux conditions environnementales
- contrôler un store motorisé
- gérer un éclairage intelligent
- activer une ventilation automatique
- fonctionner en autonomie énergétique
- être contrôlé via une interface web
- offrir un mode technicien sécurisé

---

# ⚡ Système énergétique (AUTONOMIE)

Le banc est totalement autonome grâce à un système énergétique hybride :

## 🔋 Batteries
- 2 batteries **12V**
- stockage principal de l’énergie
- alimentation du système en continu

---

## ☀️ Panneau solaire
- recharge des batteries en journée
- production d’énergie renouvelable
- fonctionnement indépendant du réseau électrique

---

## ⚙️ MPPT (Maximum Power Point Tracking)
Le contrôleur MPPT optimise la charge solaire :

- maximise la puissance du panneau solaire
- adapte tension et courant en temps réel
- améliore le rendement énergétique
- protège les batteries

---

## 🔌 Régulateur de charge
Le régulateur assure :

- protection contre surcharge
- protection contre décharge profonde
- stabilisation de la tension
- distribution sécurisée de l’énergie

---

## 🔄 Fonctionnement global énergie

1. Le **panneau solaire** capte l’énergie solaire  
2. Le **MPPT optimise la production électrique**  
3. L’énergie est envoyée au **régulateur de charge**  
4. Les **2 batteries 12V sont chargées**  
5. Les batteries alimentent :
   - ESP32
   - pompes hydroponiques
   - moteur du store
   - LEDs
   - ventilateur
   - capteurs

👉 Le système fonctionne **24h/24 en autonomie complète**

---

# 🧠 Fonctionnement général

Le système repose sur :

- 2 ESP32 connectés
- capteurs environnementaux
- communication ESP-NOW
- serveur web local
- gestion énergétique autonome

---

# 📡 Protocoles utilisés

## ESP-NOW
Communication directe entre ESP32 :
- contrôle pompe secondaire
- faible latence
- sans internet

## Wi-Fi (Access Point)
- réseau local du banc
- accès smartphone/PC
- interface web

## HTTP REST API
- lecture capteurs
- contrôle système
- dashboard

## I2C
- communication capteur BMP280
- température / pression

## PWM
- moteur du store
- pompes
- intensité LED

---

# 🧩 Composants principaux

## 🌧 Capteur de pluie
- détecte pluie faible/forte
- déclenche fermeture automatique

## 🌬 Capteur de vent
- mesure vitesse du vent
- sécurité du système

## 🌡 BMP280
- température
- pression atmosphérique

## 🌞 LDR
- jour / nuit
- contrôle automatique LEDs

## 🪴 Hydroponie x2
- 2 systèmes indépendants
- 2 pompes séparées
- cycles automatiques

## 🔆 LEDs WS2812B
- éclairage nocturne automatique

## 💨 Ventilateur
- régulation thermique

## 💧 Humidificateur
- amélioration croissance plantes

## 🪟 Store motorisé
- ouverture/fermeture automatique selon météo

---

# 🌐 Interface Web

## Mode utilisateur
- météo temps réel
- état du système
- contrôle basique

## Mode technicien
- contrôle complet
- réglage pompes
- moteur
- maintenance système
- monitoring avancé

---

# ⚙️ Architecture système

- ESP32 Master → contrôle principal
- ESP32 Slave → hydroponie 2
- communication ESP-NOW
- serveur web embarqué
- alimentation autonome solaire

---

# 🔐 Code complet

⚠️ Ce dépôt contient une version simplifiée du projet.

Le **code complet (firmware + architecture complète + logique avancée)** est disponible uniquement sur demande.

📧 Contact :
**ARYAN KUMAR**  
**ARYANKUMAR-2007@OUTLOOK.COM**

---

# 🏫 Crédit

Projet réalisé par les élèves du **Lycée Paul Le Rolland**  
dans le cadre des **Olympiades de Sciences de l’Ingénieur**

---
