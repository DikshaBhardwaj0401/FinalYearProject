
int data;
int a=8;
int b=9;
int a1=10;
int b1=11;

void setup() 
{
 
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); //make the LED pin (13) as output
  digitalWrite (LED_BUILTIN, LOW);
  Serial.println("Hi!, I am Arduino");

}

void loop() 
{
  // put your main code here, to run repeatedly:
  // This is an infinite loop function, it is used for using a functionality continuously.
  // You cannot break out of this loop

  while (Serial.available())
  {
    data = Serial.read();
  }

  if (data == '1')
  {
    
  digitalWrite (LED_BUILTIN, LOW);
  digitalWrite (a, LOW);
  digitalWrite (b, HIGH);
  digitalWrite (b1, HIGH);
  digitalWrite (a1, LOW);
  analogWrite(A0, 255);
  analogWrite(A1, 255); 
  
  delay(6000);
  
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a1, LOW);
  digitalWrite(b1, LOW);
    
  }
  else if (data == '0')
  digitalWrite (LED_BUILTIN, HIGH);
  
}




