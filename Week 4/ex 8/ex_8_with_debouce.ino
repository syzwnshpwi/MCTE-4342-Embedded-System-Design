#include <ezButton.h>

int total_A, total_B, total_C, total_D, total_E;
ezButton A(2);
ezButton B(3);
ezButton C(4);
ezButton D(5);

void setup()
{
  Serial.begin(9600);
  A.setDebounceTime(100); B.setDebounceTime(100); C.setDebounceTime(100); D.setDebounceTime(100);
}

void loop()
{
  A.loop();
  B.loop();
  C.loop();
  D.loop();
  
  if (A.isPressed())
  {
    total_A++;
    print();
  }
  
  else if (B.isPressed())
  {
    total_B++;
    print();
  }
  
  else if (C.isPressed())
  {
    total_C++;
    print();
  }
  
  else if (D.isPressed())
  {
    total_D++;
    print();
  }
  else
  {
    
  }
}

void print()
{
  Serial.print("A = ");
  Serial.print(total_A);
  Serial.print(" B = ");
  Serial.print(total_B);
  Serial.print(" C = ");
  Serial.print(total_C);
  Serial.print(" D = ");
  Serial.print(total_D);
  Serial.print('\n');
}
