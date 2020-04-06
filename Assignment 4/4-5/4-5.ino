String gradeChack(int yourScore);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  Serial.println(gradeChack(random(30, 100)));
  Serial.println("-----------------------------------");
  delay(2000);
}
