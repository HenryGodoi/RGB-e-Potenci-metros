// C++ code
//
int pole_A1 = 0;

int pole_A2 = 0;

int pole_A3 = 0;

void setup()
{
  pinMode(A1, INPUT);
  pinMode(11, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(10, OUTPUT);
  pinMode(A3, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  pole_A1 = analogRead(A1);
  analogWrite(11, map(pole_A1, 0, 1023, 0, 255));
  pole_A2 = analogRead(A2);
  analogWrite(10, map(pole_A2, 0, 1023, 0, 255));
  pole_A3 = analogRead(A3);
  analogWrite(9, map(pole_A3, 0, 1023, 0, 255));
  delay(10); // Delay a little bit to improve simulation performance
}
