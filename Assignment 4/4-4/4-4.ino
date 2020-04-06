String examPassChack(int yourScore, int fullScore);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int fullScore = random(0, 10) * 10;

  Serial.println(examPassChack(random(0, fullScore), fullScore));
  Serial.println("-----------------------------------");
  delay(2000);
}
