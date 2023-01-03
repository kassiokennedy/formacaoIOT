// https://www.tinkercad.com/things/k710vwIira1-epic-densor/editel?tenant=circuits
// desafio de estuda da Dio para o curso de IOT

const int sensorPin = A0; 
const int led = 6;
const int buzzer = 7;
const int motor = 9;
float temperatura = 0; 
               
void setup(){
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
}
 
void loop(){
   temperatura = (analogRead(sensorPin) * 0.0048828125 * 100); 
   Serial.print("Temperatura = "); 
   Serial.print(temperatura); 
   Serial.println(" C"); 
   delay(2000);
  
  	if(temperatura>=30){
      	digitalWrite(motor, HIGH);
      	Serial.print("Motor ligado\n");      	
    }else{
    digitalWrite(motor, LOW);
    Serial.print("Motor desligado\n");
    }
       
    if(temperatura>=50){
    	tone(buzzer, 1000);
      	digitalWrite(led, HIGH);
      	Serial.print("Buzzer e led ligados\n");
       	Serial.print("................\n");
    }else{
    noTone(buzzer);
    digitalWrite(led, LOW);
    Serial.print("Buzzer e led desligados\n");
    Serial.print("................\n");
    }
 }
