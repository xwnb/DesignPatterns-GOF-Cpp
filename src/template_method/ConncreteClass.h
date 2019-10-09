#ifndef CONCRETECLASS_H_
#define CONCRETECLASS_H_

#include "AbstractClass.h"

class ConncreteClassSubA : public AbstractClass {
 private:
  /* data */
 public:
  ConncreteClassSubA(/* args */) {}
  virtual ~ConncreteClassSubA() {}

  // 纯虚函数，子类必须定义实现
  virtual void PrimitiveOperation1() {
    std::cout << "Child SubA Operation 1\n";
  }

  virtual void PrimitiveOperation2() {
    std::cout << "Child SubA Operation 2\n";
  }

  // 可以覆盖父类的方法
  virtual void PrimitiveOperation3() {
    std::cout << "Child SubA Operation 3\n";
  }
};

class ConncreteClassSubB : public AbstractClass {
 private:
  /* data */
 public:
  ConncreteClassSubB(/* args */) {}
  virtual ~ConncreteClassSubB() {}

  // 纯虚函数，子类必须定义实现
  virtual void PrimitiveOperation1() {
    std::cout << "Child SubB Operation 1\n";
  }

  virtual void PrimitiveOperation2() {
    std::cout << "Child SubB Operation 2\n";
  }

  // 可以调用父类的方法
  virtual void PrimitiveOperation3() {
    std::cout << "Child SubB Operation 3\n";
    std::cout << "SubB call to Parent: \n";
    AbstractClass::PrimitiveOperation3();
  }
};

class ConncreteClassSubC : public AbstractClass {
 private:
  /* data */
 public:
  ConncreteClassSubC(/* args */) {}
  virtual ~ConncreteClassSubC() {}

  // 纯虚函数，子类必须定义实现
  virtual void PrimitiveOperation1() {
    std::cout << "Child SubC Operation 1\n";
  }

  virtual void PrimitiveOperation2() {
    std::cout << "Child SubC Operation 2\n";
  }

  // 可以不覆写父类方法，默认调用父类的方法
};

#endif  // !CONCRETECLASS_H_