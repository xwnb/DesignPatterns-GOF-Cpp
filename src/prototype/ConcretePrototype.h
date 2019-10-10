#ifndef CONCRETEPROTOTYPE_H_
#define CONCRETEPROTOTYPE_H_
#include <iostream>

#include "Prototype.h"

class ConcretePrototypeA : public Prototype {
 private:
  /* data */
 public:
  ConcretePrototypeA(/* args */) {}
  virtual ~ConcretePrototypeA() {}

  // 拷贝构造函数，实现深拷贝
  ConcretePrototypeA(const ConcretePrototypeA &concrete_prototype_a) {}

  virtual ConcretePrototypeA *Clone() {
    std::cout << "ConcretePrototypeA Cloned.\n";
    return new ConcretePrototypeA(*this);
  }
};

class ConcretePrototypeB : public Prototype {
 private:
  /* data */
 public:
  ConcretePrototypeB(/* args */) {}
  virtual ~ConcretePrototypeB() {}

  // 拷贝构造函数，实现深拷贝
  ConcretePrototypeB(const ConcretePrototypeA &concrete_prototype_a) {}

  // 可以返回基类，客户不需要知道具体的子类
  virtual Prototype *Clone() {
    std::cout << "ConcretePrototypeB Cloned.\n";
    return new ConcretePrototypeB(*this);
  }
};

#endif  // !CONCRETEPROTOTYPE_H_