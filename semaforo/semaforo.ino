int ledVerde=13;
int ledAmarillo=12;
int ledRojo=11;
void setup(){
  pinMode (ledVerde,OUTPUT);
  pinMode (ledAmarillo,OUTPUT);
  pinMode (ledRojo,OUTPUT);
  
}
void loop(){
  digitalWrite(ledRojo,HIGH);
  delay(2000);
  digitalWrite(ledRojo,LOW);
  delay(500);

  digitalWrite(ledVerde,HIGH);
  delay(2000);
  digitalWrite(ledVerde,LOW);
  delay(500);

  for(int i=0;x<3;x++){
    digitalWrite(ledVerde,HIGH);
  delay(1000);
  digitalWrite(ledVerde,LOW);
  delay(500);
  }
  digitalWrite(ledAmarillo,HIGH);
  delay(2000);
  digitalWrite(ledAmarillo,LOW);
  delay(500);
  
}

