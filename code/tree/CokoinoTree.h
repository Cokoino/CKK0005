/*
 * Download the source code:https://github.com/Cokoino/CKK0005
 * Programmer:cokoino
 * date:2019-11-14
 */
#ifndef COKOINOTREE_H_
#define COKOINOTREE_H_ 
#include <Arduino.h>
#define NOP __asm__ __volatile__ ("nop")

class CokoinoTree
{
 public:
     CokoinoTree(uint8_t pin);
     void Shift(uint8_t num);              //The led shift 8 bits and then lights up
     void Flash(int t);                    //Shining speed
     void Flash_ON_OFF(int on,int off);    //adjust brightness,ChristmasTrees.Flash_ON_OFF(on:0---255,off:0---255);
 private:
     uint8_t _pin;
     uint8_t new_num;
     uint8_t old_num;
};
#endif
