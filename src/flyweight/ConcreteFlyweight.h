/**
 *
 */

#ifndef CONCRETE_FLYWEIGHT_H_
#define CONCRETE_FLYWEIGHT_H_

#include <iostream>
#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight {
 private:
  /* data */
  char ch_;

 public:
  ConcreteFlyweight(char ch) : ch_(ch) {
    std::cout << "ConcreteFlyweight: *" << ch_ << "* Constructed.\n";
  }
  virtual ~ConcreteFlyweight() {
    std::cout << "ConcreteFlyweight: *" << ch_ << "* Deconstructed.\n";
  }
};

#endif  // !CONCRETE_FLYWEIGHT_H_