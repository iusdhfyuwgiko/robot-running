int I1 = 4;
int I2 = 5;
int I3 = 6;
int I4 = 7;
void setup() 
{
pinMode (I1, OUTPUT);
pinMode (I2, OUTPUT);
pinMode (I3, OUTPUT);
pinMode (I4, OUTPUT);
}

void loop() 
{
digitalWrite (I1, HIGH);
digitalWrite (I2, LOW);
digitalWrite (I3, HIGH);
digitalWrite (I4, LOW);
delay(5000);
digitalWrite (I1, LOW);
digitalWrite (I2, LOW);
digitalWrite (I3, HIGH);
digitalWrite (I4, LOW);
delay(200);
}
