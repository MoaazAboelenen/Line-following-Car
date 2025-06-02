int Cz_Pr_wew=A0;
int Cz_Le_wew=A1;
int Cz_Pr_zew=A2;
int Cz_Le_zew=A3;

int wartosc=250;

int PredkoscSP=9;
int PredkoscSL=10;
int vF= 255;

void setup() {
  
for(int i=5; i<11; i++){
  pinMode(i, OUTPUT);} 
pinMode(Cz_Pr_wew,INPUT);
pinMode(Cz_Le_wew,INPUT);
pinMode(Cz_Pr_zew,INPUT);
pinMode(Cz_Le_zew,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {

if(analogRead(Cz_Pr_wew)<wartosc && analogRead(Cz_Le_wew)<wartosc && analogRead(Cz_Pr_zew)<wartosc && analogRead(Cz_Le_zew) <wartosc){
digitalWrite(5,LOW),
digitalWrite(6,LOW),
digitalWrite(7,HIGH),
digitalWrite(8,HIGH),
analogWrite(PredkoscSP,vF),
analogWrite(PredkoscSL,vF),
delay(10);}

if(analogRead(Cz_Pr_wew) >=wartosc && analogRead(Cz_Le_wew)<wartosc && analogRead(Cz_Pr_zew)<wartosc && analogRead(Cz_Le_zew) <wartosc){
digitalWrite(5,LOW),
digitalWrite(6,LOW),
digitalWrite(7,HIGH),
digitalWrite(8,HIGH),
analogWrite(PredkoscSP,0),
analogWrite(PredkoscSL,vF),
delay(10);}

if(analogRead(Cz_Le_wew) >=wartosc && analogRead(Cz_Pr_wew)<wartosc && analogRead(Cz_Pr_zew)<wartosc && analogRead(Cz_Le_zew) <wartosc){
digitalWrite(5,LOW),
digitalWrite(6,LOW),
digitalWrite(7,HIGH),
digitalWrite(8,HIGH),
analogWrite(PredkoscSL,0),
analogWrite(PredkoscSP,vF),
delay(10);}

if(analogRead(Cz_Pr_zew)>=wartosc && analogRead(Cz_Pr_wew) >=wartosc && analogRead(Cz_Le_wew)<wartosc && analogRead(Cz_Le_zew)<wartosc){
digitalWrite(5,HIGH),
digitalWrite(6,LOW),
digitalWrite(7,LOW),
digitalWrite(8,HIGH),
analogWrite(PredkoscSP,vF),
analogWrite(PredkoscSL,vF),
delay(10);}

if(analogRead(Cz_Le_zew)>=wartosc && analogRead(Cz_Le_wew) >=wartosc && analogRead(Cz_Pr_wew)<wartosc && analogRead(Cz_Pr_zew)<wartosc){
digitalWrite(5,LOW),
digitalWrite(6,HIGH),
digitalWrite(7,HIGH),
digitalWrite(8,LOW),
analogWrite(PredkoscSL,vF),
analogWrite(PredkoscSP,vF),
delay(10);}

if(analogRead(Cz_Pr_zew) >=wartosc && analogRead(Cz_Le_wew)<wartosc && analogRead(Cz_Pr_wew)<wartosc && analogRead(Cz_Le_zew) <wartosc){
digitalWrite(5,HIGH),
digitalWrite(6,LOW),
digitalWrite(7,LOW),
digitalWrite(8,HIGH),
analogWrite(PredkoscSP,vF),
analogWrite(PredkoscSL,vF),
delay(10);}

if(analogRead(Cz_Le_zew) >=wartosc && analogRead(Cz_Pr_wew)<wartosc && analogRead(Cz_Pr_zew)<wartosc && analogRead(Cz_Le_wew) <wartosc){
digitalWrite(5,LOW),
digitalWrite(6,HIGH),
digitalWrite(7,HIGH),
digitalWrite(8,LOW),
analogWrite(PredkoscSL,vF),
analogWrite(PredkoscSP,vF),
delay(10);}
}
