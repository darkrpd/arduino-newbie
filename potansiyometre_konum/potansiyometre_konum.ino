void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int konum = analogRead(A0);
  Serial.println(konum);
  int konum2=map(konum,0,1024,0,255);
  delay(50);
  analogWrite(3,konum2);
  
}
