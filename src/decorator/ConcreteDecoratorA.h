#ifndef CONCRETEDECORATORA_H_
#define CONCRETEDECORATORA_H_

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
 private:
  char board_;

 public:
  ConcreteDecoratorA(Component *componet, char board)
      : Decorator(componet), board_(board) {
    std::cout << "ConcreteDecoratorA is constructed.\n";
  }
  virtual ~ConcreteDecoratorA() {
    std::cout << "ConcreteDecoratorA is deconstructed.\n";
  }

  virtual void AddBehaviorByA() {
    std::cout << "AddBehavior by decorator A.\n";
    std::string str(10, board_);
    std::cout << str << std::endl;
  }
  virtual void Operation() {
    Decorator::Operation();
    AddBehaviorByA();
  }
};

#endif  // !CONCRETEDECORATORA_H_
