#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_

#include <iostream>
#include "Strategy.h"

class ConcreteStrategyB : public Strategy {
 private:
  /* data */
 public:
  ConcreteStrategyB() {
    std::cout << "ConcreteStrategyB is constructed.\n";
  }
  virtual ~ConcreteStrategyB() {
    std::cout << "ConcreteStrategyB is deconstructed.\n";
  }

  virtual void AlgorithmInterface(Context *context) {
    std::cout << "Algorithm of Strategy B is used to Context.\n";
  }
};

#endif  // !CONCRETESTRATEGYB_H_