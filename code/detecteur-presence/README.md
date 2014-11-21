# Détecteur de présence

Ce dossier contient les sources du programme Arduino du détecteur de présence, réalisé
par Jérémie Forge et Alain Barthelemy du Guichet des Technologies de Museomix.

## Préparation

### Matériel

 * Circuit [Arduino Uno](http://arduino.cc/en/Main/ArduinoBoardUno)
 * et capteur [Ultrasonic HC-SR04](https://docs.google.com/document/d/1Y-yZnNhMYy7rwhAgyL_pfa39RsB-x2qR4vP8saG73rE).

### Logiciel

 * Télécharger et installer l'[IDE Arduino 1.0](http://arduino.cc/en/Main/Software)

### Librairie Ultrasonic

Pour pouvoir compiler le programme, placer une copie de la librairie Ultrasonic HC-SR04
pour Arduino dans le dossier `~/Documents/Arduino/libraries/` des [librairies de l'IDE
Arduino](http://www.arduino.cc/en/Hacking/Libraries):

    git submodule update --init
    cd ArduinoLibraries/HCSR04Ultrasonic
    mkdir ~/Documents/Arduino/libraries/Ultrasonic
    cp Ultrasonic.{cpp,h} ~/Documents/Arduino/libraries/Ultrasonic/

Le code source qui se trouve dans le sous-dossier `ArduinoLibraries/HCSR04Ultrasonic` est lié
au référentiel externe [daijo/ArduinoLibraries](https://github.com/daijo/ArduinoLibraries)
(par le mécanisme de [sous-modules](http://git-scm.com/book/en/v2/Git-Tools-Submodules) de Git).

## Assemblage

![Assemblage de l'Arduino Uno et du capteur Ultrasonic HC-SR04](arduino-uno-ultrasonic-hc-sr04-wiring.png)

(source: https://code.google.com/p/arduino-new-ping/)

## Compilation

Raccorder l'assemblage à l'ordinateur par le câble USB (connecter le port _Programming_ sur
l'Arduino Due) et lancer l'IDE Arduino.

Ouvrir le fichier `Ultrasonic-HC-SR04/Ultrasonic-HC-SR04.ino`, sélectionner le board (menu _Tools » Board_)
et le port (menu _Tools » Port_) adéquats, puis commander l'upload du programme.

![Aperçu de l'IDE Arduino avec le programme du capteur](arduino-ide-ultrasonic-compile.png)
