
/**
 *
 */

#include <iostream>
#include <string>

#include "ConcreteMediator.h"

int main(int argc, char const *argv[]) {
  ConcreteMediator *mannager = new ConcreteMediator();
  mannager->CreateColleagues();
  delete mannager;
  return 0;
}
