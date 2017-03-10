

const int LED=3;



void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); 
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int konum = analogRead(A0);
   int konum2=map(konum,0,1024,0,255);
  analogWrite(3,konum2);
  
  //digitalWrite(LED,1);
 // delay(1000);
 // digitalWrite(13,0);
   // delay(1000);
}
