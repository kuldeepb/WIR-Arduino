#include "Arduino.h"
#include "WIR.h"

WIR::WIR()
{
  
}

WIR::~WIR()
{
  
}

 void WIR::Verbose(unsigned int Set_Verbose) 
 {	
	int Prog = 2;
    while(Set_Verbose < 2)
	{	
		pinMode(Prog,OUTPUT);
		digitalWrite(Prog,HIGH);
		delay(100);
		digitalWrite( Prog, LOW);                          		  
		delay(100);
		digitalWrite(Prog , HIGH);
		Set_Verbose = Set_Verbose + 48;
		Serial.print("V=");
		delay(25);
		Serial.write(Set_Verbose);
		delay(25);
		Serial.write('\r');
		delay(25);
		Serial.write('X');
		delay(25);
		Serial.write('\r');
	} 
}
 
void WIR::Airdata(int Set_Airdata)
{
	unsigned int AR1,AR2;
	int Prog = 2;
      
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                         		  
	delay(100);
	digitalWrite(Prog , HIGH);

	AR1 = (Set_Airdata & 0xF0) >> 4;
	if( AR1 < 10 )
	{
		AR1 = AR1 + 48;
	}
	else
	{
		AR1 = AR1 + 55; 
	}
	AR2 = (Set_Airdata & 0x0F);
	if(AR2<10)
	{
		AR2 = AR2 + 48;
	}
	else
	{
		AR2 = AR2 + 55;
	}
             
	Serial.print("AR=");
	delay(10);
	Serial.write(AR1);
	delay(10);
	Serial.write(AR2);
	delay(10);
	Serial.write('\r');
	delay(10);           
	Serial.write('X');
	delay(10);
	Serial.write('\r');      
}

void WIR::Baudrate(int Set_Baudrate)
{	
	int Prog = 2;
	unsigned int BR1, BR2;
    {  
		pinMode(Prog,OUTPUT);
		digitalWrite(Prog,HIGH);
		delay(100);
		digitalWrite(Prog , LOW);                          		   
		delay(100);
		digitalWrite(Prog , HIGH);

		BR1 = (Set_Baudrate & 0xF0) >> 4;
        if( BR1 < 10 )
        {
            BR1 = BR1 + 48;
        }
        else
        {
            BR1 = BR1 + 55; 
        }
		BR2 = (Set_Baudrate & 0x0F);
		if(BR2<10)
		{
			BR2 = BR2 + 48;
		}
		else
		{
			BR2 = BR2 + 55;
		}
             
		Serial.print("B=");
		delay(10);
		Serial.write(BR1);
		delay(10);
		Serial.write(BR2);
		delay(10);
		Serial.write('\r');
		delay(10);           
		Serial.write('X');
		delay(10);
		Serial.write('\r');      
	}
}

void WIR::Carrierfreq(int Set_Carrierfreq)
{	
	int Prog = 2;
	unsigned int CF1,CF2;
    {
        pinMode(Prog,OUTPUT);
		digitalWrite(Prog,HIGH);
		delay(100);
		digitalWrite(Prog , LOW);             
		delay(100);
		digitalWrite(Prog , HIGH);
      
		CF1 = (Set_Carrierfreq & 0xF0) >> 4;
        if( CF1 < 10 )
        {
			CF1 = CF1 + 48;
        }
        else
        {
			CF1 = CF1 + 55; 
        }
		CF2 = (Set_Carrierfreq & 0x0F);
		if(CF2<10)
		{
			CF2 = CF2 + 48;
		}
		else
		{
			CF2 = CF2 + 55;
		}
             
		Serial.print("CF=");
		delay(10);
		Serial.write(CF1);
		delay(10);
		Serial.write(CF2);
		delay(10);
		Serial.write('\r');
		delay(10);           
		Serial.write('X');
		delay(10);
		Serial.write('\r');      
	}
}

void WIR::Destination(unsigned int Set_Destination)
{	
	int Prog = 2;
	unsigned int D1,D2,D3,D4;
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                                   		  
	delay(100);
	digitalWrite(Prog , HIGH);
	D1 = (Set_Destination & 0xF000) >> 12;
	if( D1 < 10 )
	{
		D1 = D1 + 48;
	}
	else
	{
		D1 = D1 + 55; 
	}
	D2 = (Set_Destination & 0x0F00) >> 8;
	if( D2 < 10 )
	{
		D2 = D2 + 48;
	}
	else
	{
		D2 = D2 + 55; 
	}
	D3 = (Set_Destination & 0x00F0) >> 4;
	if( D3 < 10 )
	{
		D3 = D3 + 48;
	}
	else
	{
		D3 = D3 + 55; 
	}
	D4 = (Set_Destination & 0x000F);
	if( D4 < 10 )
	{
		D4 = D4 + 48;
	}
	else
	{
		D4 = D4 + 55; 
	}
	
	Serial.print("D=");
	delay(100);   
	Serial.write(D1);
	delay(10);
	Serial.write(D2);
	delay(10);
	Serial.write(D3);
	delay(10);
	Serial.write(D4);
	delay(10); 
	Serial.write('\r');
	delay(10);
	Serial.write('X');
	delay(10);
	Serial.write('\r');         
}

void WIR::En_Repeater(int Set_En_Repeater)
{	  
	int Prog = 2;
	unsigned int R1,R2;
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                         		  
	delay(100);
	digitalWrite(Prog , HIGH);

	R1 = (Set_En_Repeater & 0xF0) >> 4;
	if( R1 < 10 )
	{
		R1 = R1 + 48;
	}
	else
	{
		R1 = R1 + 55; 
	}
	R2 = (Set_En_Repeater & 0x0F);
	if(R2<10)
	{
		R2 = R2 + 48;
	}
	else
	{
		R2 = R2 + 55;
	}
	 
	Serial.print("M=");
	delay(10);
	Serial.write(R1);
	delay(10);
	Serial.write(R2);
	delay(10);
	Serial.write('\r');
	delay(10);           
	Serial.write('X');
	delay(10);
	Serial.write('\r');      
}

void WIR::Hop(int Set_hop)
{	
	int Prog = 2;
    unsigned int H1,H2;
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);            
	delay(100);
	digitalWrite(Prog , HIGH);

	H1 = (Set_hop & 0xF0) >> 4;
	if( H1 < 10 )
	{
		H1 = H1 + 48;
	}
	else
	{
		H1 = H1 + 55; 
	}
	H2 = (Set_hop & 0x0F);
	if(H2<10)
	{
		H2 = H2 + 48;
	}
	else
	{
		H2 = H2 + 55;
	}
		 
	Serial.print("H=");
	delay(10);
	Serial.write(H1);
	delay(10);
	Serial.write(H2);
	delay(10);
	Serial.write('\r');
	delay(10);           
	Serial.write('X');
	delay(10);
	Serial.write('\r');      
}

void WIR::Network(unsigned int Set_Network)
{
	int Prog = 2;
	unsigned int N1,N2,N3,N4;
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                         		   
	delay(100);
	digitalWrite(Prog , HIGH);
	N1 = (Set_Network & 0xF000) >> 12;
	if( N1 < 10 )
	{
		N1 = N1 + 48;
	}
	else
	{
		N1 = N1 + 55; 
	}
	N2 = (Set_Network & 0x0F00) >> 8;
	if( N2 < 10 )
	{
		N2 = N2 + 48;
	}
	else
	{
		N2 = N2 + 55; 
	}
	N3 = (Set_Network & 0x00F0) >> 4;
	if( N3 < 10 )
	{
		N3 = N3 + 48;
	}
	else
	{
		N3 = N3 + 55; 
	}
	N4 = (Set_Network & 0x000F);
	if( N4 < 10 )
	{
		N4 = N4 + 48;
	}
	else
	{
		N4 = N4 + 55; 
	}
	
	Serial.print("N=");
	delay(100);
	Serial.write(N1);
	delay(10);
	Serial.write(N2);
	delay(10);
	Serial.write(N3);
	delay(10);
	Serial.write(N4);
	delay(10);
	Serial.write('\r');
	delay(10);
	Serial.write('X');
	delay(10);
	Serial.write('\r'); 
}

void WIR::Power(int Set_Power)
{
	unsigned int P1,P2;
    int Prog = 2;  
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                          		  
	delay(100);
	digitalWrite(Prog , HIGH);

	P1 = (Set_Power & 0xF0) >> 4;
	if( P2 < 10 )
	{
		P1 = P1 + 48;
	}
	else
	{
		P1 = P2 + 55; 
	}
	P2 = (Set_Power & 0x0F);
	if(P2<10)
	{
		P2 = P2 + 48;
	}
	else
	{
		P2 = P2 + 55;
	}
	 
	Serial.print("P=");
	delay(10);
	Serial.write(P1);
	delay(10);
	Serial.write(P2);
	delay(10);
	Serial.write('\r');
	delay(10);           
	Serial.write('X');
	delay(10);
	Serial.write('\r');      
}

void WIR::RSSI(int Set_RSSI)
{
	int Prog = 2;
	unsigned int RS1,RS2;
	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);             
	delay(100);
	digitalWrite(Prog , HIGH);

	RS1 = (Set_RSSI & 0xF0) >> 4;
	if( RS1 < 10 )
	{
		RS1 = RS1 + 48;
	}
	else
	{
		RS1 = RS1 + 55; 
	}
	RS2 = (Set_RSSI & 0x0F);
	if(RS2<10)
	{
		RS2 = RS2 + 48;
	}
	else
	{
		RS2 = RS2 + 55;
	}
		 
	Serial.print("R=");
	delay(10);
	Serial.write(RS1);
	delay(10);
	Serial.write(RS2);
	delay(10);
	Serial.write('\r');
	delay(10);           
	Serial.write('X');
	delay(10);
	Serial.write('\r');      
}

void WIR::Source(unsigned int Set_Source)
{
	int Prog = 2;
	unsigned int S1,S2,S3,S4;
 	pinMode(Prog,OUTPUT);
	digitalWrite(Prog,HIGH);
	delay(100);
	digitalWrite(Prog , LOW);                          		  
	delay(100);
	digitalWrite(Prog , HIGH);

	S1 = (Set_Source & 0xF000) >> 12;
	if( S1 < 10 )
	{
		S1 = S1 + 48;
	}
	else
	{
		S1 = S1 + 55; 
	}
	S2 = (Set_Source & 0x0F00) >> 8;
	if( S2 < 10 )
	{
		S2 = S2 + 48;
	}
	else
	{
		S2 = S2 + 55; 
	}
	S3 = (Set_Source & 0x00F0) >> 4;
	if( S3 < 10 )
	{
		S3 = S3 + 48;
	}
	else
	{
		S3 = S3 + 55; 
	}
	S4 = (Set_Source & 0x000F);
	if( S4 < 10 )
	{
		S4 = S4 + 48;
	}
	else
	{
		S4 = S4 + 55; 
	}
	
	Serial.print("S=");
	delay(100); 

	Serial.write(S1);
	delay(10);
	Serial.write(S2);
	delay(10);
	Serial.write(S3);
	delay(10);
	Serial.write(S4);
	delay(10); 
	Serial.write('\r');
	delay(10);
	Serial.write('X');
	delay(10);
	Serial.write('\r');   
}

void WIR::WIR_send(  char data)
{
	int CTS = 3; 
	// char data;
	// char *StringPtr;
	{      
		while(digitalRead(CTS) == HIGH);     
		{
			Serial.write(data);
			delay(10);
		} 
	}
}

void WIR:: WIR_string(char *StringPtr)
{ 
	int CTS = 3; 	   
	while(digitalRead(CTS) == HIGH);    
	{
		// char *StringPtr;
	
		while(*StringPtr!= 0x00)
		{
			WIR_send(*StringPtr);
			*StringPtr++;
		}
	} 
}

void WIR:: Encryption(unsigned int set_Encryption)
{
	int Prog = 2;
    while(set_Encryption < 2)
	{	
		pinMode(Prog,OUTPUT);
		digitalWrite(Prog,HIGH);
		delay(100);
		digitalWrite( Prog, LOW);                          		  
		delay(100);
		digitalWrite(Prog , HIGH);
		set_Encryption = set_Encryption + 48;
		Serial.print("I=");
		delay(25);
		Serial.write(set_Encryption);
		delay(25);
		Serial.write('\r');
		delay(25);
		Serial.write('X');
		delay(25);
		Serial.write('\r');
    } 
}
 







