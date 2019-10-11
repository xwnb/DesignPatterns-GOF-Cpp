#ifndef PRODUCTB2_H_
#define PRODUCTB2_H_

#include <iostream>
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
 private:
  /* data */
 public:
  ProductB2(/* args */) {
    std::cout << "ProductB2 is constructed.\n";
  }
  virtual ~ProductB2() {
    std::cout << "ProductB2 is deconstructed.\n";
  }
};

#endif  // !PRODUCTB2_H_