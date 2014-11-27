# Détecteur de présence

Ce dossier contient les sources du programme Arduino du détecteur de présence, réalisé
par Jérémie Forge et Alain Barthélémy, en support au _Guichet des Technologies_ de Museomix Léman 2014.

<img src="../../images/IMG_6250.JPG" height="200" title="Assemblage du détecteur avec Arduino Due"/>

## Préparation

### Matériel

 * Circuit [Arduino Uno](http://arduino.cc/en/Main/ArduinoBoardUno)
 * Capteur [Ultrasonic HC-SR04](https://docs.google.com/document/d/1Y-yZnNhMYy7rwhAgyL_pfa39RsB-x2qR4vP8saG73rE)
 * Breadboard et câbles
 * Câble USB/microUSB pour programmer l'Arduino

### Logiciel

 * Télécharger et installer l'[IDE Arduino 1.0](http://arduino.cc/en/Main/Software)

### Librairie Ultrasonic

Pour pouvoir compiler le programme, placer une copie de la librairie Ultrasonic HC-SR04 pour Arduino
dans le dossier des [librairies de l'IDE Arduino](http://www.arduino.cc/en/Hacking/Libraries).

Voici les instructions pour Mac OS X; le dossier cible des librairies est `~/Documents/Arduino/libraries/`:

    git submodule update --init
    cd ArduinoLibraries/HCSR04Ultrasonic
    mkdir ~/Documents/Arduino/libraries/Ultrasonic
    cp Ultrasonic.{cpp,h} ~/Documents/Arduino/libraries/Ultrasonic/

Le code source de la librairie Ultrasonic se trouve dans le sous-dossier `ArduinoLibraries/HCSR04Ultrasonic`
— ce dernier étant lié au référentiel externe [daijo/ArduinoLibraries](https://github.com/daijo/ArduinoLibraries)
par le mécanisme de [sous-modules](http://git-scm.com/book/en/v2/Git-Tools-Submodules) de Git.

## Assemblage

![Assemblage de l'Arduino Uno et du capteur Ultrasonic HC-SR04](arduino-uno-ultrasonic-hc-sr04-wiring.png)

(source: https://code.google.com/p/arduino-new-ping/)

## Compilation

Raccorder l'assemblage à l'ordinateur par le câble USB (connecter le port _Programming_ sur
l'Arduino Due) et lancer l'IDE Arduino.

Ouvrir le fichier `Ultrasonic-HC-SR04/Ultrasonic-HC-SR04.ino`, sélectionner le board adéquat (menu _Tools » Board_)
et le port (menu _Tools » Port_) adéquats, puis commander l'upload du programme (menu _File » Upload_).

![Aperçu de l'IDE Arduino avec le programme du capteur](arduino-ide-ultrasonic-compile.png)

Puis ouvrir le moniteur du port série. Si le dispositif fonctionne, on peut y lire la distance d'un objet au détecteur, exprimée en centimètres.

![Aperçu du moniteur du port série](arduino-ide-ultrasonic-serial-monitor.png)
