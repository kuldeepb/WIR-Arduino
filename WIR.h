#ifndef WIR_H
#define WIR_H
#define WIR_Receivedata	(Serial.read)

#include <WProgram.h> 

class WIR{
  public:
  WIR();
  ~WIR();
  void Verbose(unsigned int Set_Verbose); 
  void Airdata(int Set_Airdata);			//set the keyword.
  void Baudrate(int Set_Baudrate);
  void Carrierfreq(int Set_Carrierfreq);
  void Destination( unsigned int Set_Destination);
  void En_Repeater(int Set_En_Repeater);
  void Hop(int Set_hop);
  void Network(unsigned int Set_Network);
  void Power(int Set_Power);
  void RSSI(int Set_RSSI);
  void Source( unsigned int Set_Source);
  void WIR_send(char data);
  void WIR_string(char *StringPtr);
  void Encryption(unsigned int set_Encryption);
		
};

#endif
