int yourAge(int yearInCE);
String yourAreYoung(int age);

void setup() {
  Serial.begin(9600);
  Serial.println("-----------------------------------");
}

void loop() {
  int yearCE = random(1950, 2019);

  Serial.println("I’m born in " + String(yearCE) + " C.E.");
  Serial.println(yourAreYoung(yourAge(yearCE)));
  Serial.println("-----------------------------------");
  delay(2000);
}
