#ifndef ABSTRACTCLASS_H_
#define ABSTRACTCLASS_H_

#include <iostream>

class AbstractClass {
 private:
  /* data */
 public:
  AbstractClass(/* args */) {}
  virtual ~AbstractClass() {}

  // 该类的模板方法，即该类可以抽离出有同样的操作步骤
  virtual void TemplateMethod() {
    PrimitiveOperation1();
    PrimitiveOperation2();
    PrimitiveOperation3();
  }

  // 纯虚函数，子类必须定义实现
  virtual void PrimitiveOperation1() = 0;

  // 父类可以什么都不做
  virtual void PrimitiveOperation2() {}

  // 父类也可以做点什么
  virtual void PrimitiveOperation3() {
    std::cout << "Parent Operation 3\n";
  }
};

#endif  // !ABSTRACTCLASS_H_