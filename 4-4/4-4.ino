String examPassChack(int yourScore, int fullScore) {

  String result;

  if (yourScore>=(fullScore/2)){

      result=" Your are " + String (yourScore) + " form "+

      String (fullScore) +" point in last exam.\nPass exam Congratulations.";
  }

  if (yourScore<=(fullScore/2)){

      result=" Your are " + String (yourScore)+ " form "+

      String (fullScore) +" poin in last exam.\nFail exam Attempt agin.";

  }
  return result;
}
