/**
 *
 */

#ifndef CONCRETE_COMMAND_A_H_
#define CONCRETE_COMMAND_A_H_

#include <iostream>
#include <string>
#include "Command.h"
#include "Receiver.h"

class ConcreteCommandA : public Command {
 private:
  /* data */
  Receiver *receiver_;

 public:
  ConcreteCommandA(Receiver *receiver) : receiver_(receiver) {
    std::cout << "ConcreteCommandA: Constructed.\n";
  }
  virtual ~ConcreteCommandA() {
    std::cout << "ConcreteCommandA: Deconstructed.\n";
  }

  virtual void Execute() {
    std::cout << "ConcreteCommandA: To Execute Command A.\n";
    receiver_->ActionA();
  }
};

#endif  // !CONCRETE_COMMAND_A_H_
