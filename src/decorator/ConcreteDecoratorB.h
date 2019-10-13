#ifndef CONCRETEDECORATORB_H_
#define CONCRETEDECORATORB_H_

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
 private:
  char board_;

 public:
  ConcreteDecoratorB(Component *componet, char board)
      : Decorator(componet), board_(board) {
    std::cout << "ConcreteDecoratorB is constructed.\n";
  }
  virtual ~ConcreteDecoratorB() {
    std::cout << "ConcreteDecoratorB is deconstructed.\n";
  }

  virtual void AddBehaviorByB() {
    std::cout << "AddBehavior by decorator B.\n";
    std::string str(10, board_);
    std::cout << str << std::endl;
  }
  virtual void Operation() {
    Decorator::Operation();
    AddBehaviorByB();
  }
};

#endif  // !CONCRETEDECORATORB_H_
