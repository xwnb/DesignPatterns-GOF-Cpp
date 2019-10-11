#ifndef DIRCTOR_H_
#define DIRCTOR_H_

#include "ConcreteBuilder.h"

class Director {
 private:
 public:
  Director() {}
  virtual ~Director() {}

  virtual void Construct(Builder *builder) {
    std::cout << "Director is going to build Product.\n";
    builder->BuildPartA();
    builder->BuildPartB();
    builder->BuildPartC();
  }
};

#endif  // !DIRCTOR_H_