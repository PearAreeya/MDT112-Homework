void setup(){
    Serial.begin(9600); 
    pinMode(2,INPUT_PULLUP); 
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    for(int led = 3 ; led <= 13 ;led++)
    {

        pinMode(led,OUTPUT);

    }

    tone(8,200,500); 
    delay(250); 
    tone(8,400,100); 
    
}
 
    int l = 3;
    int t = 100;
    int i = 1;


void loop(){
  
    for(l= 3 ; l <= 13 ; l++){ 
      
        if(l == 8){

            digitalWrite(l,0);
            continue;

        }

        digitalWrite(l,1); 
        delay(t);
        digitalWrite(l,0); 

        if ( digitalRead(2) == 0 ){
          
            i = i * 2;
            t = t / 2;
            Serial.println("Faster X2 (Current Speed : X" + String(i) + ")");
            tone(8,400,100);
            delay(500);
        }
    }

    for(l = 13 ; l >= 3 ; l--){

        if(l == 8){

            digitalWrite(l,0); 
            continue;

        }

        digitalWrite(l,1); 
        delay(t);
        digitalWrite(l,0); 

        if ( digitalRead(2) == 0 ){

            i = i * 2;
            Serial.println("Faster X2 (Current Speed : X" + String(i) + ")");
            tone(8,400,100);
            t = t / 2;
            delay(500);
        }
    }
}
