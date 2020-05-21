#include"CokoinoTree.h"

CokoinoTree::CokoinoTree(uint8_t pin)
{
  new_num = 0;
  old_num = 0;
  _pin = pin;
  pinMode(_pin,OUTPUT);
  digitalWrite(_pin,LOW);
}
/////////////////////////////////////////////////////////
void CokoinoTree::Shift(uint8_t num)
{
  new_num = num + old_num;
  for(uint8_t t=0;t<new_num;t++){
    digitalWrite(_pin,LOW);
    NOP;NOP;NOP;NOP;NOP;
    digitalWrite(_pin,HIGH);
    NOP;NOP;NOP;NOP;NOP;
    digitalWrite(_pin,LOW);
  }
  old_num = 10 - num;
}
/////////////////////////////////////////////////////////
void CokoinoTree::Flash(int t)    
{
  for(uint8_t i=0;i<10;i++){
    digitalWrite(_pin,LOW);
    delay(t);
    digitalWrite(_pin,HIGH);
    delay(t);
    digitalWrite(_pin,LOW); 
  }
}
/////////////////////////////////////////////////////////
void CokoinoTree::Flash_ON_OFF(int on,int off)
{
  if(on > 255){on = 255;}
  if(off > 255){off = 255;}
  for(uint8_t i=0;i<10;i++){
    digitalWrite(_pin,LOW);
    delay(off);
    digitalWrite(_pin,HIGH);
    delay(on);
    digitalWrite(_pin,LOW);
  }
}

