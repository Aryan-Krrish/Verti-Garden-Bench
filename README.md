# 🌱 Verti-Garden Bench

## Smart Autonomous Hydroponic Urban Bench

Projet développé par les élèves du **Lycée Paul Le Rolland**  
dans le cadre des **Olympiades de Sciences de l’Ingénieur**

---
## 🏆 Mise à jour — Lauréats académiques

Nous sommes fiers d’annoncer que **Verti Garden Bench** a remporté les **Olympiades académiques de Sciences de l’Ingénieur**.

Après plusieurs mois de travail, de conception, de tests et d’améliorations, notre projet a été sélectionné comme **lauréat au niveau académique**. Cette victoire représente une grande étape pour notre équipe et valorise notre travail autour de l’innovation, de l’écologie et de la ville de demain.

Grâce à cette réussite, **Verti Garden Bench** participera à la **finale nationale des Olympiades de Sciences de l’Ingénieur**, avec la présence d’équipes internationales invitées venant de plusieurs pays, notamment la **Chine**, l’**Inde** et l’**Allemagne**.

Notre objectif reste le même : montrer comment un simple banc peut devenir une solution **intelligente, écologique et sociale** pour améliorer les espaces urbains et rendre les villes plus vertes, plus connectées et plus humaines.

Merci à toutes les personnes qui nous soutiennent depuis le début.  
L’aventure continue 🌱🚀
---
## 🚀 Nouvelle mise à jour — Améliorations du projet

Après notre sélection comme **lauréats académiques des Olympiades de Sciences de l’Ingénieur**, nous avons continué à faire évoluer **Verti Garden Bench** avec de nouvelles fonctionnalités innovantes.

Notre objectif est d’aller plus loin qu’un simple banc intelligent : nous voulons créer une vraie expérience autour de la nature, du bien-être et de la ville du futur.

### 🌱 Verti Care IA

**Verti Care IA** est une nouvelle amélioration du projet dédiée à la santé des plantes.

Ce système utilise une caméra et de l’intelligence artificielle pour analyser l’état des feuilles et détecter certains problèmes comme :

- les maladies des plantes ;
- le stress hydrique ;
- les carences nutritionnelles ;
- les signes de mauvaise croissance.

L’objectif est d’aider le technicien ou l’utilisateur d’un banc privé à mieux comprendre l’état des plantes et à faciliter leur entretien.

### 🎧 Téléportation des sensations

**Téléportation des sensations** est une autre innovation ajoutée au projet.

Ce système combine des **odeurs naturelles** et une **ambiance sonore relaxante** pour créer une expérience plus calme et immersive. L’idée est de réduire le stress, le bruit et la sensation de pollution en ville, en donnant à l’utilisateur l’impression d’être transporté dans un environnement naturel, comme un jardin ou une forêt.

### 🌍 Une vision plus complète

Avec ces nouvelles améliorations, **Verti Garden Bench** devient plus qu’un banc écologique : c’est un espace intelligent, social et sensoriel, pensé pour améliorer le bien-être des utilisateurs tout en apportant plus de nature dans les villes.

L’aventure continue 🌱🚀
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


