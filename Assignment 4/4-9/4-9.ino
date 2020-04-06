String drawTriangle(int maxNumber);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int maxNumber = random(4, 20);

  Serial.println("Triangle : " + String(maxNumber));
  Serial.println(drawTriangle(maxNumber));
  Serial.println("-----------------------------------");
  delay(2000);
}
