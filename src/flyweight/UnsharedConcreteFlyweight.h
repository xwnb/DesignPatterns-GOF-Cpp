/**
 *
 */

#ifndef UNSHARED_CONCRETE_FLYWEIGHT_H_
#define UNSHARED_CONCRETE_FLYWEIGHT_H_

#include <iostream>
#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight {
 private:
  /* data */
  int num_;

 public:
  UnsharedConcreteFlyweight(int num) : num_(num) {
    std::cout << "UnsharedConcreteFlyweight: *" << num_ << "* Constructed.\n";
  }
  virtual ~UnsharedConcreteFlyweight() {
    std::cout << "UnsharedConcreteFlyweight: *" << num_ << "* Deconstructed.\n";
  }
};

#endif  // !UNSHARED_CONCRETE_FLYWEIGHT_H_