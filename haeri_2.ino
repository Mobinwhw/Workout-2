int ledpinred = 5;//ledgreen connected to digital pin 5
int ledpinyellow = 3;//ledyellow connected to digital pin 3
 int ledpingreen = 4;//ledred connected to digital pin 4
void setup() {
  // put your setup code here, to run once:
 pinMode(ledpinred,OUTPUT);//sets the digital pin as output
 pinMode(ledpinyellow,OUTPUT);//sets the digital pin as output
 pinMode(ledpingreen,OUTPUT);//sets the digital pin as output
 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpingreen,HIGH);//turns the ledgreen on
digitalWrite(ledpinyellow,LOW);//turns the ledyellow off
digitalWrite(ledpinred,LOW);//turns the ledred off
delay(3000);//waits for 3 second
digitalWrite(ledpinyellow,HIGH);//turns the ledyellow on
digitalWrite(ledpingreen,LOW);//turns the ledgreen off
digitalWrite(ledpinred,LOW);//turns the ledred off
delay(1000);//waits for a second
digitalWrite(ledpinred,HIGH);//turns the ledred on
digitalWrite(ledpinyellow,LOW);//turns the ledgreen off
digitalWrite(ledpingreen,LOW);//turns the ledyellow off
delay(2000);//waits for 2 second
}
