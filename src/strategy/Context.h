#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <iostream>
#include "Strategy.h"

class Context {
 private:
  /**
   * 这里采用将 Strategy 抽象类作为 Context 的一个成员对象来实现不同 Strategy
   * 具体类的配置。 此外也可以通过模板方法来绑定 Context 和不同的 Strategy
   * 具体类， 这样就不需要定义 Strategy 抽象类， 也实现了 Context 和 Strategy
   * 的解耦了， 而且通过模板参数来静态绑定 Strategy 的具体类， 提高效率。
   */
  Strategy *strategy_;

 public:
  Context(Strategy *strategy) : strategy_(strategy) {
    std::cout << "Get the strategy_.\n";
    std::cout << "Context is constructed.\n";
  }
  virtual ~Context() {
    std::cout << "Delete the strategy_...\n";
    delete strategy_;
    std::cout << "Context is deconstructed.\n";
  }

  virtual void ContextInterface() {
    std::cout << "Invoking strategy_'s method...\n";

    // 调用 Strategy 的算法接口， 这里将 Context 自身作为参数传入 Strategy 中，
    // 这样就不需要传入其他参数了。
    strategy_->AlgorithmInterface(this);
  }
};

#endif  // !CONTEXT_H_