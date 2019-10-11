#ifndef CONCRETEIMPLEMENTORB_H_
#define CONCRETEIMPLEMENTORB_H_

#include <iostream>
#include "Implementor.h"

class ConcreteImplementorB : public Implementor {
 private:
  /* data */
 public:
  ConcreteImplementorB(/* args */) {
    std::cout << "ConcreteImplementorB is constructed.\n";
  }

  ~ConcreteImplementorB() {
    std::cout << "ConcreteImplementorB is deconstructed.\n";
  }

  virtual void OperationImpA() {
    std::cout << "Here is OperationImp of ConcreteImplementorB.\n";
  }

  virtual void OperationImpB1() {
    std::cout << "Here is OperationImpB1 of ConcreteImplementorB.\n";
  }

  virtual void OperationImpB2() {
    std::cout << "Here is OperationImpB2 of ConcreteImplementorB.\n";
  }
};

#endif  // !CONCRETEIMPLEMENTORB_H_