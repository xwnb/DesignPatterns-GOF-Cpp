/**
 *
 */

#ifndef CONCRETE_SUBJECT_H_
#define CONCRETE_SUBJECT_H_

#include <iostream>
#include <string>

#include "Subject.h"

class ConcreteSubject : public Subject {
 private:
  /* data */
  std::string subject_state_;

 public:
  ConcreteSubject(std::string name) : Subject(name) {
    std::cout << "ConcreteSubject " << name_ << " is constructed.\n";
  }
  virtual ~ConcreteSubject() {
    std::cout << "ConcreteSubject " << name_ << " is deconstructed.\n";
  }

  virtual std::string GetState() {
    return subject_state_;
  }

  virtual void SetState(std::string state) {
    subject_state_ = state;
  }
};

#endif  // !CONCRETE_SUBJECT_H_
