int maxInt(int value1, int value2);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int value1 = random(0, 100);
  int value2 = random(0, 100);

  Serial.println("Pair number : " + String(value1) + ", " + String(value2));
  Serial.println("Max number is : " + String(maxInt(value1, value2)));
  Serial.println("-----------------------------------");
  delay(2000);
}
