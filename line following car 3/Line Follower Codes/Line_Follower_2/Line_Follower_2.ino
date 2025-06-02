int motor1_1 = 3; 
int motor1_2 = 4; 
int motor2_1 = 6; 
int motor2_2 = 7; 
int sensor1 = 10;
int sensor2 = 11;
int sensorstate1 = 0;
int sensorstate2 = 0;                                                                      
void setup() {
pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(motor1_1, OUTPUT);
pinMode(motor1_2, OUTPUT);
pinMode(motor2_1, OUTPUT);
pinMode(motor2_2, OUTPUT);
}
void loop() {
sensorstate1 = digitalRead(sensor1);
sensorstate2 = digitalRead(sensor2);
if ((sensorstate1 == LOW)&&(sensorstate2 == LOW)) {
digitalWrite(motor1_1, HIGH); 
digitalWrite(motor1_2, LOW);
digitalWrite(motor2_1, HIGH); 
digitalWrite(motor2_2, LOW);
}
if ((sensorstate1 == LOW)&&(sensorstate2 == HIGH)) {
digitalWrite(motor1_1, HIGH); 
digitalWrite(motor1_2, LOW);
digitalWrite(motor2_1, LOW); 
digitalWrite(motor2_2, HIGH);
}
if ((sensorstate1 == HIGH)&&(sensorstate2 == LOW)) {
digitalWrite(motor2_1, HIGH); 
digitalWrite(motor2_2, LOW);
digitalWrite(motor1_1, LOW); 
digitalWrite(motor1_2, HIGH);
 
}
if ((sensorstate2 == HIGH)&&(sensorstate1 == HIGH)) {
digitalWrite(motor2_1, LOW); 
digitalWrite(motor2_2, LOW);
digitalWrite(motor1_1, LOW); 
digitalWrite(motor1_2, LOW);

}
}
