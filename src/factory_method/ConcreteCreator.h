#ifndef CONCRETECREATOR_H_
#define CONCRETECREATOR_H_

#include <iostream>

#include "ConcreteProduct.h"
#include "Creator.h"

class ConcreteCreator : public Creator {
 private:
  /* data */
 public:
  ConcreteCreator() {}
  virtual ~ConcreteCreator() {}

  // 工厂方法，例如创建对象
  virtual void AnOperation(Product *product) {
    std::cout << "Do some operations to product.\n";
  }

  virtual Product *CreateOperation(std::string &name) {
    return new ConcreteProduct(name);
  }
};

#endif  // !CONCRETECREATOR_H_
