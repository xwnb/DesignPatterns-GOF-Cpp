#ifndef PRODUCTB1_H_
#define PRODUCTB1_H_

#include <iostream>
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
 private:
  /* data */
 public:
  ProductB1(/* args */) {
    std::cout << "ProductB1 is constructed.\n";
  }
  virtual ~ProductB1() {
    std::cout << "ProductB1 is deconstructed.\n";
  }
};

#endif  // !PRODUCTB1_H_