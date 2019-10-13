
/**
 * 对象接口
 *
 * 这是 ConcreteComponent 类和 Decorator 类的公共父类， 要保证其简单性，
 * 就是最好就只有接口， 数据的定义应该延迟到子类中去， 否则 Component
 * 类会很庞大， 赋予的功能太多对于具体的子类来说， 可能并不需要。
 *
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <iostream>
#include "Component.h"

class Component {
 private:
  /* data */
 public:
  Component(/* args */) {}
  virtual ~Component() {}

  virtual void Operation() = 0;
};

#endif  // !COMPONENT_H_
