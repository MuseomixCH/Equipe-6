/*
  Script Arduino pour lire la distance livree par le
  detecteur de presence sur le port serie.
  
  Voir illustration arduino-uno-ultrasonic-hc-sr04-wiring.png
  pour le schema de cablage.

  Alternativement, raccorder ECHO sur le pin 13 pour avoir un
  feedback sur la LED du board Arduino; ajuster la constante ECHO
  a la valeur 13 le cas echeant.
*/

#include <Ultrasonic.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     11

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  // Centimetres
  Serial.println(cmMsec);

  delay(100);
}
