#ifndef CREATOR_H_
#define CREATOR_H_

#include <iostream>

#include "Product.h"

class Creator {
 private:
  /* data */
 public:
  Creator() {}
  virtual ~Creator() {}

  // 结合模板方法
  virtual Product *FactoryMethod(std::string name) {
    Product *product = CreateOperation(name);
    AnOperation(product);
    std::cout << name + " Product Created.\n";
    return product;
  }

  // 工厂方法，例如创建对象等其他操作
  virtual void AnOperation(Product *product) = 0;

  virtual Product *CreateOperation(std::string &name) = 0;
};

#endif  // !CREATOR_H_