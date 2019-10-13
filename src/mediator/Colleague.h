/**
 *
 */

#ifndef COLLEAGUE_H_
#define COLLEAGUE_H_

#include <iostream>
#include <string>
#include "Mediator.h"

class Colleague {
 private:
  /* data */
  Mediator *mediator_;
  std::string name_;

 public:
  Colleague(std::string name, Mediator *mediator)
      : name_(name), mediator_(mediator) {}
  virtual ~Colleague() {}
  std::string Name() {
    return name_;
  }

  virtual void Event(std::string event) = 0;

  virtual void ReceiveEvent(std::string receiver, std::string event) = 0;

  virtual void EmitEvent(std::string receiver, std::string &event) {
    mediator_->EmitEvent(receiver, event);
  }
};

#endif  // !COLLEAGUE_H_