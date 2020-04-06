String gradeChack(int yourScore) {

  String result;

   if(yourScore>=0 && yourScore<=54){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade F. See you again next semester.";

   }

   if(yourScore>=55 && yourScore<=59){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade D.";

   }

   if(yourScore>=60 && yourScore<=64){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade D+.";

   }

   if(yourScore>=65 && yourScore<=69){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade C.";

   }

   if(yourScore>=70 && yourScore<74){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade C+.";

   }

   if(yourScore>=75 && yourScore<=79){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade B.";

   }

   if(yourScore>=80 && yourScore<=84){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade B+.";

   }

   if(yourScore>=85 && yourScore<=100){

       result = "Your are " + String(yourScore) + 

       " from 100 point in Computer Programming Subject.\nYou get grade A.";

   }

  return result;

}
