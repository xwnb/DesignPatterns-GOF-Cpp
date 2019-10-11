#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
 private:
  /* data */
 public:
  AbstractFactory(/* args */) {}
  virtual ~AbstractFactory() {}

  virtual AbstractProductA *CreateProductA() = 0;
  virtual AbstractProductB *CreateProductB() = 0;
};

#endif  // !ABSTRACTFACTORY_H_