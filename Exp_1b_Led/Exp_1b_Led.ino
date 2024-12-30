int l=7;
void setup(){
  pinMode(l,OUTPUT);
}

void loop(){

  digitalWrite(l,HIGH);
  delay(3000);
  digitalWrite(l,LOW);
  delay(3000);

}