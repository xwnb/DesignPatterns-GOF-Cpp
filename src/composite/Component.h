#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <iostream>
#include <string>

/**
 * 为组合中的对象声明接口
 * 在适当情况下实现所有类的公共接口的默认行为
 * 声明一个接口用于管理和访问 Component 的子组件
 * 在递归结构中定义接口， 用于访问一个父组件
 *
 *
 * 最大化 Comonent 的接口， 并为这些接口提供默认的方法， 子类根据需要重载方法。
 * 但是最大化接口存在一个问题是， 如果某些继承下的子类并不需要某些操作， 比如
 * Leaf 类并不需要 Add 和 Remove 方法。 怎么处理？
 *
 * 安全性和透明性之间权衡：
 * 如果强调透明性， 那对于客户如果操作的了对于某些子组件没有意义 （没有重写）
 * 的方法， 需要事先做好默认操作， 比如调用了 Leaf 类的 Add 和 Remove 方法。
 *
 * 如果强调安全性， 那容器组件中的各类对象的接口不一致了。 这样对于用户来说，
 * 并不知道这是 Leaf 对象还是 Composite 对象。 如果调用到 Add 或 Remove
 * 方法恰好是 Leaf 对象的， 怎么处理的问题。
 *
 * 如果强调透明性， 1） 可以增加一些查询接口， 用来查询容器组件中的对象是
 * Composite 还是 Leaf。 2） 在 Component 定义好缺省的方法， 这里是 Add 和
 * Remove 方法。 但是考虑对 Leaf 调用 Add 和 Remove 时会失败的可能性。
 * 比如抛出异常等。
 */

class Component {
 private:
  /* data */
 public:
  Component(/* args */) {}
  virtual ~Component() {}

  virtual std::string Name() = 0;

  virtual void Operation() {}

  virtual void Add(Component *component) {}

  virtual void Remove(Component *component) {}

  virtual void GetChild(int child) {}
};

#endif  // !COMPONENT_H_
