/**
 *
 */

#ifndef CONCRETE_STATE_B_H_
#define CONCRETE_STATE_B_H_

#include <iostream>
#include <string>
#include "ConcreteStateC.h"
#include "Context.h"

class ConcreteStateB : public State {
 private:
  /* data */
  static ConcreteStateB state_;

 protected:
  ConcreteStateB(/* args */) {}

 public:
  static ConcreteStateB *Instance() {
    return &state_;
  }

  virtual ~ConcreteStateB() {}

  virtual void Handle(Context *context) {
    std::cout << "StateB Handle...\nTransfer to StateC.\n";
    context->Request(ConcreteStateC::Instance());
  }
};

ConcreteStateB ConcreteStateB::state_;

#endif  // !CONCRETE_STATE_B_H_