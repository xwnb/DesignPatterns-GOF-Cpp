#ifndef CONCRETEFACTORY2_H_
#define CONCRETEFACTORY2_H_

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
 private:
  /* data */
 public:
  ConcreteFactory2(/* args */) {}
  virtual ~ConcreteFactory2() {}

  virtual AbstractProductA *CreateProductA() {
    std::cout << "Factory2 creates ProductA2.\n";
    return new ProductA2();
  }

  virtual AbstractProductB *CreateProductB() {
    std::cout << "Factory2 creates ProductB2.\n";
    return new ProductB2();
  }
};

#endif  // !CONCRETEFACTORY2_H_