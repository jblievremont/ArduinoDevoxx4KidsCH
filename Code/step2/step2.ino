int zikmu[] = {262,196,196,220,196,0,247,262};
int pouetDuree[] = {4,8,8,4,4,4,4,4 };

void setup() {
  for (int pouet = 0; pouet < 8; pouet++) {
    long duree = 1000/pouetDuree[pouet];
    tone(8, zikmu[pouet],duree);
    delay(duree * 1.4);
    noTone(8);
  }
}

void loop() {
}
