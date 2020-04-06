String yourAreYoung(int age);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  Serial.println(yourAreYoung(random(1, 99)));
  Serial.println("-----------------------------------");
  delay(2000);
}
