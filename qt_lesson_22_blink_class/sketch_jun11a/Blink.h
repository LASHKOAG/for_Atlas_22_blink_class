#ifndef BLINK_H
#define BLINK_H

#include "Arduino.h"

class Blink
{
public:
  Blink();

  void init();

  void my_blink();

  void set_delay(unsigned int user_delay);
  int get_delay();
  
private:
  unsigned int m_delay{500};
  
  const int pin_white{4};
  const int pin_red{5};
  const int pin_blue{6};
  const int pin_yellow{7};
};

#endif
