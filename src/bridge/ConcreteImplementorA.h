#ifndef CONCRETEIMPLEMENTORA_H_
#define CONCRETEIMPLEMENTORA_H_

#include <iostream>
#include "Implementor.h"

class ConcreteImplementorA : public Implementor {
 private:
  /* data */
 public:
  ConcreteImplementorA(/* args */) {
    std::cout << "ConcreteImplementorA is constructed.\n";
  }

  ~ConcreteImplementorA() {
    std::cout << "ConcreteImplementorA is deconstructed.\n";
  }

  virtual void OperationImpA() {
    std::cout << "Here is OperationImpA of ConcreteImplementorA.\n";
  }

  virtual void OperationImpB1() {
    std::cout << "Here is OperationImpB1 of ConcreteImplementorA.\n";
  }

  virtual void OperationImpB2() {
    std::cout << "Here is OperationImpB2 of ConcreteImplementorA.\n";
  }
};

#endif  // !CONCRETEIMPLEMENTORA_H_