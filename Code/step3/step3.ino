void setup() {
  // Configuration de la communication
  Serial.begin(9600);
}

void loop() {
  // Lire l'entrée analogique 0
  int lumiere = analogRead(A0);
  // S'il se bloque sur l'ordinateur, on peut lire la valeur
  Serial.println(lumiere);
  // Maintenant, nous prenons l'entrée (de 400 à 1000)
  // Et nous la traduisons à la sortie (entre 120 et 1500Hz)
  // Ces nombres peuvent changer en fonction de la lumière dans la pièce
  int tonaliteCourante = map(lumiere, 400, 1000, 120, 1500);
  // Jouer le ton
  tone(8, tonaliteCourante, 10);
  delay(50);        // Courte pause, donne un meilleur résultat
}
