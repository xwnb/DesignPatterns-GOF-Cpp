
/**
 *
 */

#include <iostream>
#include <string>

#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "ConcreteStateC.h"
#include "Context.h"

int main(int argc, char const *argv[]) {
  Context *context = new Context();

  context->Request(ConcreteStateA::Instance());

  delete context;
  return 0;
}
