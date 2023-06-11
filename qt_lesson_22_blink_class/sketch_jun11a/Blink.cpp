#include "Blink.h"

Blink::Blink()
{
  init();
}

void Blink::init()
{
  pinMode(pin_white, OUTPUT);
  pinMode(pin_red, OUTPUT);
  pinMode(pin_blue, OUTPUT);
  pinMode(pin_yellow, OUTPUT);
}

void Blink::my_blink()
{
  digitalWrite(pin_blue, HIGH);
  delay(m_delay);
  digitalWrite(pin_blue, LOW);
  delay(m_delay);
}

void Blink::set_delay(unsigned int user_delay)
{
  if (user_delay <= 0){
    return;
  }
  
  m_delay = user_delay; 
}

int Blink::get_delay()
{
  return m_delay;
}
