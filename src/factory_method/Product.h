#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
#include <string>

class Product {
 private:
  std::string name_;

 public:
  Product(std::string &name) : name_(name) {}
  virtual ~Product() {}

  virtual void SayHello() {
    std::cout << name_ + ", Hello!\n";
  }
};

#endif  // !PRODUCT_H_