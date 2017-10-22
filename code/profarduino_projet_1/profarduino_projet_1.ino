// Projet de dé électronique.
// Fichier: profarduino_projet_1.ino
// 
// https://github.com/franztrierweiler/profarduino_projet_1
// https://www.facebook.com/profarduino
//
// Créé et maintenu par:
// - Sixtine Trierweiler
// - Franz Trierweiler
// 
// Code source sous licence GPL
//

// Affectation des broches de l'ATMEGA 2560
// Définir des étiquettes permet de changer plus facilement les broches dans le programme
#define DE_LED1 22
#define DE_LED2 23
#define DE_LED3 24
#define DE_LED4 25
#define DE_LED5 26
#define DE_LED6 27
#define DE_LED7 28

#define TEMPS_SIGNAL 50

// Variables globales en mémoire RAM

// Initialisation de l'Arduino
// Cette fonction est appellée une seule fois au démarrage de l'Arduino
void setup()
{
  pinMode (DE_LED1, OUTPUT);
  pinMode (DE_LED2, OUTPUT);
  pinMode (DE_LED3, OUTPUT);
  pinMode (DE_LED4, OUTPUT);
  pinMode (DE_LED5, OUTPUT);
  pinMode (DE_LED6, OUTPUT);
  pinMode (DE_LED7, OUTPUT);
} 

// Boucle principale de l'Arduino
// Cette portion de code est appellée indéfiniment
void loop()
{  
  digitalWrite (DE_LED1, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED1, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED2, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED2, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED3, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED3, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED4, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED4, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED5, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED5, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED6, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED6, LOW);
  delay (TEMPS_SIGNAL);
  
  digitalWrite (DE_LED7, HIGH);
  delay (TEMPS_SIGNAL);
  digitalWrite (DE_LED7, LOW);
  delay (TEMPS_SIGNAL);
}
