String multiplicationTable(int multiple);

void setup() {
  Serial.begin(9600);
  Serial.println("");

  for (int i = 2; i <= 12; i++) {
    Serial.println(multiplicationTable(i));
  }
}

void loop() {
  /*
  Do
  Nothing
  */
}
