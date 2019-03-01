#include "Event.h"
#include <iostream>
#include <stdlib.h>

Event::Event(){
  eric='a'+rand()%26;
  std::cout << eric;
}

bool Event::consume(){
  char betterEric=eric-32;
  std::cout << betterEric;
}
