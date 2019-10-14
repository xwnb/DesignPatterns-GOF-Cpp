/**
 *
 */

#ifndef CONCRETE_STATE_C_H_
#define CONCRETE_STATE_C_H_

#include <iostream>
#include <string>
#include "ConcreteStateA.h"
#include "Context.h"
class ConcreteStateA;

class ConcreteStateC : public State {
 private:
  /* data */
  static ConcreteStateC state_;

 protected:
  ConcreteStateC(/* args */) {}

 public:
  static ConcreteStateC *Instance() {
    return &state_;
  }

  virtual ~ConcreteStateC() {}

  virtual void Handle(Context *context) {
    std::cout << "StateC Handle...\n";
    //  context->Request(ConcreteStateA::Instance());
  }
};

ConcreteStateC ConcreteStateC::state_;
#endif  // !CONCRETE_STATE_C_H_