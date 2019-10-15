/**
 *
 */

#ifndef REAL_SUBJECT_H_
#define REAL_SUBJECT_H_

#include <iostream>
#include <string>
#include "Subject.h"

class RealSubject : public Subject {
 private:
  /* data */
  std::string name_;

 public:
  RealSubject(std::string name) : name_(name) {
    std::cout << "RealSubject: Constructed.\n";
  }
  virtual ~RealSubject() {
    std::cout << "RealSubject: Deconstructed.\n";
  }

  virtual void SetName(std::string name) {
    std::cout << "RealSubject: Set Name.\n";
    name_ = name;
  }

  virtual std::string Name() {
    std::cout << "RealSubject: Get Name.\n";
    return name_;
  }

  virtual void Request() {
    std::cout << "RealSubject: Real Request.\n";
  }
};

#endif  // !REAL_SUBJECT_H_
