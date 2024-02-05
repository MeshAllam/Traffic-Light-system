  // First Task  ========@@@@@@@ Allam @@@@@@@========


void setup()
 {                         
  pinModeOUT (0 ,3);     //0=> Green /1=> yellow /2=> Red                                                                            
 }
 
//------------------------------------------------------------
void loop() 
 {
  digitalWrite(2 ,HIGH);
  TimesFlash(1 ,3 ,750);
  
  digitalWrite(0 ,LOW);
  digitalWrite(1 ,LOW);

  digitalWrite(0 ,HIGH);  
  delay(1000);
  digitalWrite(0 ,LOW);  
  delay(2000);
 }

//----------------------------------------------------------
 void pinModeOUT (int start ,int End) 
  {
       for(int i = start; i < End; i++)
        {
          pinMode(i ,OUTPUT);
        }       
  }
  

  void TimesFlash (int pin ,int Times ,int Delay)
  {
       for(int i = 0; i < Times; i++)
     {
          digitalWrite(pin ,LOW);
       delay(Delay);
          digitalWrite(pin ,HIGH);
       delay(Delay);
     }
  }