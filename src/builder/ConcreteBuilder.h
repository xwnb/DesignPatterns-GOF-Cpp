#ifndef CONCRETEBUILDER_H_
#define CONCRETEBUILDER_H_

#include "Builder.h"

class ConcreteBuilder : public Builder {
 private:
  Product *product_;

 public:
  ConcreteBuilder() : product_(new Product) {
    std::cout << "ConcreteBuilder is constructed.\n";
    std::cout << "new() Product.\n";
  }
  virtual ~ConcreteBuilder() {
    if (product_) {
      delete product_;
      product_ = nullptr;
      std::cout << "delete() Product.\n";
    }
    std::cout << "ConcreteBuilder is deconstructed.\n";
  }

  // 获取构建产品的结构
  virtual Product *GetResult() {
    return product_;
  }

  virtual void BuildPartA() {
    product_->part_a = "A";
    std::cout << "Part A is build.\n";
  }

  virtual void BuildPartB() {
    product_->part_b = "B";
    std::cout << "Part B is build.\n";
  }

  virtual void BuildPartC() {
    product_->part_c = "C";
    std::cout << "Part C is build.\n";
  }
};

#endif  // !CONCRETEBUILDER_H_