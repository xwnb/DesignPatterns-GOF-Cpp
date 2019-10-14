/**
 *
 */

#ifndef CONCRETE_STATE_A_H_
#define CONCRETE_STATE_A_H_

#include <iostream>
#include <string>
#include "ConcreteStateB.h"
#include "Context.h"

class ConcreteStateA : public State {
 private:
  /* data */
  static ConcreteStateA state_;

 protected:
  ConcreteStateA(/* args */) {}

 public:
  static ConcreteStateA *Instance() {
    return &state_;
  }
  virtual ~ConcreteStateA() {}

  virtual void Handle(Context *context) {
    std::cout << "StateA Handle...\nTransfer to StateB.\n";
    context->Request(ConcreteStateB::Instance());
  }
};

ConcreteStateA ConcreteStateA::state_;

#endif  // !CONCRETE_STATE_A_H_