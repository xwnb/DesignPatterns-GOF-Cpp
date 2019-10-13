#ifndef CONCRETECOMPONENT_H_
#define CONCRETECOMPONENT_H_

#include <iostream>
#include <string>
#include "Component.h"

class ConcreteComponent : public Component {
 private:
  std::string text_;

 public:
  ConcreteComponent(std::string text) : text_(text) {
    std::cout << "ConcreteComponent is constructed.\n";
  }
  virtual ~ConcreteComponent() {
    std::cout << "ConcreteComponent is deconstructed.\n";
  }

  virtual void Operation() {
    std::cout << text_ << std::endl;
  }
};

#endif  // !CONCRETECOMPONENT_H_
