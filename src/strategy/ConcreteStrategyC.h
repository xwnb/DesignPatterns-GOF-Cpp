#ifndef CONCRETESTRATEGYC_H_
#define CONCRETESTRATEGYC_H_

#include <iostream>
#include "Strategy.h"

class ConcreteStrategyC : public Strategy {
 private:
  /* data */
 public:
  ConcreteStrategyC() {
    std::cout << "ConcreteStrategyC is constructed.\n";
  }
  virtual ~ConcreteStrategyC() {
    std::cout << "ConcreteStrategyC is deconstructed.\n";
  }

  virtual void AlgorithmInterface(Context *context) {
    std::cout << "Algorithm of Strategy C is used to Context.\n";
  }
};

#endif  // !CONCRETESTRATEGYC_H_