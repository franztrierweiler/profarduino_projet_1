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
#define DE_BOUTON 40

#define TEMPS_AFFICHAGE_DE 1000
#define TEMPS_EFFACEMENT_DE 1000

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

  pinMode(DE_BOUTON, INPUT);

  randomSeed(analogRead(0));

  Serial.begin(9600);
} 

// Boucle principale de l'Arduino
// Cette portion de code est appellée indéfiniment
void loop()
{
  int tirage=0;
  int etat_bouton;

  etat_bouton = digitalRead(DE_BOUTON);

  //Serial.println(etat_bouton);

  if (etat_bouton == 1)
  {
    tirage = random (1, 6);

    // Effacement des LEDs
    digitalWrite (DE_LED1, LOW);
    digitalWrite (DE_LED2, LOW);
    digitalWrite (DE_LED3, LOW);
    digitalWrite (DE_LED4, LOW);
    digitalWrite (DE_LED5, LOW);
    digitalWrite (DE_LED6, LOW);
    digitalWrite (DE_LED7, LOW);

    if (tirage == 1)
    {
      digitalWrite (DE_LED4, HIGH);
    }
  
    if (tirage == 2)
    {
      digitalWrite (DE_LED3, HIGH);
      digitalWrite (DE_LED7, HIGH);
    }
  
    if (tirage == 3)
    {
      digitalWrite (DE_LED3, HIGH);
      digitalWrite (DE_LED4, HIGH);
      digitalWrite (DE_LED7, HIGH);
    }
    
    if (tirage == 4)
    {
      digitalWrite (DE_LED1, HIGH);
      digitalWrite (DE_LED3, HIGH);
      digitalWrite (DE_LED5, HIGH);
      digitalWrite (DE_LED7, HIGH);
    }
  
    if (tirage == 5)
    {
      digitalWrite (DE_LED1, HIGH);
      digitalWrite (DE_LED3, HIGH);
      digitalWrite (DE_LED4, HIGH);
      digitalWrite (DE_LED5, HIGH);
      digitalWrite (DE_LED7, HIGH);
    }
  
    if (tirage == 6)
    {
      digitalWrite (DE_LED1, HIGH);
      digitalWrite (DE_LED2, HIGH);
      digitalWrite (DE_LED3, HIGH);
      digitalWrite (DE_LED5, HIGH);
      digitalWrite (DE_LED6, HIGH);
      digitalWrite (DE_LED7, HIGH);
    }
  
  }
  
}









