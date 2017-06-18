

int a;
int b;
int c;
void setup() {
  
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  a=digitalRead(10);   
  b=digitalRead(11); 
  c=digitalRead(12); 
  if((a&&b)||(a&&!b&&!c)){
    digitalWrite(13,HIGH);           
  }else{
     digitalWrite(13,LOW); 
  }
}
