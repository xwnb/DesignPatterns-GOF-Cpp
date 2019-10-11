#ifndef CONCRETEFACTORY1_H_
#define CONCRETEFACTORY1_H_

#include <iostream>
#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
 private:
  /* data */
 public:
  ConcreteFactory1(/* args */) {}
  virtual ~ConcreteFactory1() {}

  virtual AbstractProductA *CreateProductA() {
    std::cout << "Factory1 creates ProductA1.\n";
    return new ProductA1();
  }

  virtual AbstractProductB *CreateProductB() {
    std::cout << "Factory1 creates ProductB1.\n";
    return new ProductB1();
  }
};

#endif  // !CONCRETEFACTORY1_H_