# robot-running
int trig =9; int echo =10; int duration =0; int I1 =4; int I2 =5; int I3 =6; int I4 =7; float distance =0; void setup() { pinMode(trig, OUTPUT); pinMode(echo, INPUT); pinMode(I1, OUTPUT); pinMode(I2, OUTPUT); pinMode(I3, OUTPUT); pinMode(I4, OUTPUT); Serial.begin(9600); } void loop() { digitalWrite(trig, LOW); digitalWrite(trig, HIGH); delayMicroseconds(10); digitalWrite(trig, LOW); duration=pulseIn(echo, HIGH); float distance=(33400.00/1000000.00)*duration/2.00; Serial.println(distance); if(distance<35) { digitalWrite(I1, LOW); digitalWrite(I2, HIGH); digitalWrite(I3, LOW); digitalWrite(I4, HIGH); } else { digitalWrite(I1, LOW); digitalWrite(I2, LOW); digitalWrite(I3, HIGH); digitalWrite(I4, LOW); delay(1000); digitalWrite(I1, HIGH; digitalWrite(I2, LOW); digitalWrite(I3, HIGH); digitalWrite(I4, LOW); } }
