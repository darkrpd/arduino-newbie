
int pinler [] = {2,3,4,5,6,7};


void setup() {
  // put your setup code here, to run once:
for(int i=0;i<6;i++)
  {
    pinMode(pinler[i],OUTPUT);
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<6;i++)
  {
   digitalWrite(pinler[i],HIGH);
   delay(30);
   digitalWrite(pinler[i+1],HIGH);
   delay(30);
   digitalWrite(pinler[i],LOW);
   delay(60);
  }
  for(int i=6;i>0;i--)
  {
   digitalWrite(pinler[i],HIGH);
   delay(30);
   digitalWrite(pinler[i-1],HIGH);
   delay(30);
   digitalWrite(pinler[i],LOW);
   delay(60);
  }
}
