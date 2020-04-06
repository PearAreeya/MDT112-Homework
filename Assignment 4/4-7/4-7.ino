String multiplication(int multiple);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int multiple = random(2, 12);

  Serial.println("Multiplication : " + String(multiple));
  Serial.println(multiplication(multiple));
  Serial.println("-----------------------------------");
  delay(2000);
}
