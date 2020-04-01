void setup() 
{
pinMode(2,OUTPUT); //RED
pinMode(3,OUTPUT); //GREEN
pinMode(4,OUTPUT); //BLUE
pinMode(5,INPUT);  //IR sensor
Serial.begin(9600);
}

void loop() 
{
  int a= digitalRead(5);
  Serial.println(a);
  delay(100);

  digitalWrite(2,LOW); //RED off
  digitalWrite(3,HIGH); //GREEN on by default
  digitalWrite(4,LOW); //BLUE off

  if(a==1)
  { 
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
            
       for(int i=0; i<20; i++)
         {
            digitalWrite(2,HIGH);
            delay(1000);
         }  
     digitalWrite(2,LOW);
  }
}
