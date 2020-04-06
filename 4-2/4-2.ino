String yourAreYoung(int age) {

  String result;

  result = "I'm" + String(age)+" year old ";

   if (age <= 18 && age >0) {

        result= "I'm" + String(age)+" year old\n"

        "Your are young."; 
}
  return result;
}
#define CURRENT_YEAR 2020

int yourAge(int yearInCE) {

    yearInCE = CURRENT_YEAR - yearInCE;

    return yearInCE;

}
