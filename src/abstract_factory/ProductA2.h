#ifndef PRODUCTA2_H_
#define PRODUCTA2_H_

#include <iostream>
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
 private:
  /* data */
 public:
  ProductA2(/* args */) {
    std::cout << "ProductA2 is constructed.\n";
  }
  virtual ~ProductA2() {
    std::cout << "ProductA2 is deconstructed.\n";
  }
};

#endif  // !PRODUCTA2_H_