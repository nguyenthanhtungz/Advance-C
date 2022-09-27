// Vẫn chưa hoàn thành đang câp nhật!!!!!!!!!!!!





#include <Arduino.h>
#include <stdlib.h>
uint8_t ledPin[] = {6,7,8,9}; // Mảng lưu vị trí các chân Digital mà các đèn LED sử dụng theo thứ tự từ 1->8. 
uint8_t pinCount; 
#define ButtonBlinkLed 5
#define ButtonSangDuoi 4

void TurnOnAllLed (){
  for (int i = 0; i < pinCount; i++)
  {
  
    digitalWrite(ledPin[i], HIGH);
  
  }
  
}

void TurnOnAllLed (){
  for (int i = 0; i < pinCount; i++)
  {
  
    digitalWrite(ledPin[i], LOW);
  
  }
  
}


void blinkLed ();
