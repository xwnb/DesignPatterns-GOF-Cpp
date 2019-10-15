/**
 *
 */

#include <iostream>
#include <string>
#include "ConcreteCommandA.h"
#include "ConcreteCommandB.h"
#include "Invoker.h"
#include "Receiver.h"

int main(int argc, char const *argv[]) {
  Invoker *invoker = new Invoker();
  Receiver *receiver = new Receiver();

  invoker->Add(new ConcreteCommandA(receiver));
  invoker->Add(new ConcreteCommandB(receiver));
  invoker->Add(new ConcreteCommandA(receiver));

  invoker->Execute();

  delete receiver;
  delete invoker;

  return 0;
}
