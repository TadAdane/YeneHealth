bool flag ;
void setup() {
pinMode(7,OUTPUT);
pinMode(2,INPUT);
// bool flag= true;
}

void loop() {
  bool btn = digitalRead(2);
  
  if (btn == true){
    if(flag == true){
    digitalWrite(7,1);
    flag = false;
    }
  else{
     digitalWrite(7,0);
     flag = true;
  }
  }
 

}
