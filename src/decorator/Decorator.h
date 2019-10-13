/**
 * 装饰器接口
 *
 * 维持一个指向 Component 的对象指针， 并且定义一个与 Component 接口一致的接口，
 * 维持一致的接口意味着客户在操作被装饰器装饰后的对象 （其实这时候是 Decorator
 * 对象， 并不是 ConcreteComponent 对象） 和操作 ConcreteComponent
 * 的方式是一致的， 所以保证 Decorator 和 ConcreteComponent 有一个公共父类
 * Component 即可保证接口一致。
 *
 * 和 Strategy 模式的不同是，Decorator 模式并不需要知道所装饰的组件，
 * 这些装饰对组件是透明的。 但是 Strategy 模式中， 组件必须维护一个 Strategy
 * 对象， 根据需要定义不同的策略。 另外， 策略模式可以定义自己独特的接口，
 * 而不需要保持和组件接口一致。
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <iostream>
#include "Component.h"

class Decorator : public Component {
 private:
  // 维持一个指向 Component 的对象指针
  Component *component_;

 public:
  Decorator(Component *component) : component_(component) {}
  virtual ~Decorator() {
    std::cout << "Delete component_.\n";
    delete component_;
  }

  // 与 Component 对象一致的接口， （不改变 Component 的调用方式）
  virtual void Operation() {
    component_->Operation();
  }
};

#endif  // !DECORATOR_H_
