/**
 *
 */

#ifndef CONCRETE_COMMAND_B_H_
#define CONCRETE_COMMAND_B_H_

#include <iostream>
#include <string>
#include "Command.h"
#include "Receiver.h"

class ConcreteCommandB : public Command {
 private:
  /* data */
  Receiver *receiver_;

 public:
  ConcreteCommandB(Receiver *receiver) : receiver_(receiver) {
    std::cout << "ConcreteCommandB: Constructed.\n";
  }
  virtual ~ConcreteCommandB() {
    std::cout << "ConcreteCommandB: Deconstructed.\n";
  }

  virtual void Execute() {
    std::cout << "ConcreteCommandB: To Execute Command B.\n";
    receiver_->ActionB();
  }
};

#endif  // !CONCRETE_COMMAND_B_H_
