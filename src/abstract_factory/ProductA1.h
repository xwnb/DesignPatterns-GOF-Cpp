#ifndef PRODUCTA1_H_
#define PRODUCTA1_H_

#include <iostream>
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
 private:
  /* data */
 public:
  ProductA1(/* args */) {
    std::cout << "ProductA1 is constructed.\n";
  }
  virtual ~ProductA1() {
    std::cout << "ProductA1 is deconstructed.\n";
  }
};

#endif  // !PRODUCTA1_H_