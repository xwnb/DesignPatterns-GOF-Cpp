#ifndef CONCRETEPRODUCT_H_
#define CONCRETEPRODUCT_H_

#include "Product.h"

class ConcreteProduct : public Product {
 private:
  /* data */
 public:
  ConcreteProduct(std::string &name) : Product(name) {}
  virtual ~ConcreteProduct() {}
};

#endif  // !CONCRETEPRODUCT_H_