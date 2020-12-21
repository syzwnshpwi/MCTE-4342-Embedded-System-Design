unsigned char*pind=(unsigned char*)0x29;
unsigned char*ddrb=(unsigned char*)0x24;
unsigned char*portb=(unsigned char*)0x25;
unsigned char*sreg=(unsigned char*)0x5F;
unsigned char*eimsk=(unsigned char*)0x3D;
unsigned char*eicra=(unsigned char*)0x69;

void setup()
{
*ddrb=1 <<5;
*sreg|=(1 <<7); 
*eimsk=1; 
*eicra=1; 
}

ISR(INT0_vect)
{
bool pin_status= ((*pind) &4);
digitalWrite(13, digitalRead(2));
}
