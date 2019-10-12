#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_

#include <iostream>
#include "Strategy.h"

class ConcreteStrategyA : public Strategy {
 private:
  /* data */
 public:
  ConcreteStrategyA() {
    std::cout << "ConcreteStrategyA is constructed.\n";
  }
  virtual ~ConcreteStrategyA() {
    std::cout << "ConcreteStrategyA is deconstructed.\n";
  }

  /**
   * 定义 Strategy 和 Context 的接口
   * Strategy 必须访问到 Context 中需要的数据，
   * 所以一种方法是将数据放入参数列表中， 在 Context 调用 Strategy
   * 的算法接口时传入， 这样可以实现两者的接口。 但是如果是简单算法时，
   * 可能就会传入一些不必要的数据了。
   *
   * 另一种方法是把 Context 当作参数传入。 这样在 Strategy 中可以显式的调用
   * Context 接口来请求数据， 这样就不需要传递其他参数了。 这里采用这种方法。
   */

  virtual void AlgorithmInterface(Context *context) {
    // 可以通过 Context 的公共接口来获取需要的数据， 进行计算和修改。
    std::cout << "Algorithm of Strategy A is used to Context.\n";
  }
};

#endif  // !CONCRETESTRATEGYA_H_