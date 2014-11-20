# Détecteur de présence

Ce dossier contient les sources du programme Arduino du détecteur de présence, réalisé
avec un circuit [Arduino Uno](http://arduino.cc/en/Main/ArduinoBoardUno) et un capteur
[Ultrasonic HC-SR04](https://docs.google.com/document/d/1Y-yZnNhMYy7rwhAgyL_pfa39RsB-x2qR4vP8saG73rE).

## Préparation

Pour pouvoir compiler le programme, la librairie Arduino pour le capteur Ultrasonic HC-SR04
doit préalablement être placée dans le dossier des librairies de l'Arduino IDE.

La librairie se trouve dans le sous-dossier `ArduinoLibraries/HCSR04Ultrasonic`
(qui est lié au référentiel externe [daijo/ArduinoLibraries](https://github.com/daijo/ArduinoLibraries)
par le mécanisme de [sous-modules](http://git-scm.com/book/en/v2/Git-Tools-Submodules) de Git).

## Compilation

TODO

## Assemblage

![Assemblage de l'Arduino Uno et du capteur Ultrasonic HC-SR04](arduino-uno-ultrasonic-hc-sr04-wiring.png)

(source: https://code.google.com/p/arduino-new-ping/)
