/**
 * 定义一个抽象类接口， 维护一个指向 Implementor 类型对象的指针。
 * 这里定义通过组合 Implements 的基本操作接口， 实现较高层次的操作接口。
 */

#ifndef ABSTRACTION_H_
#define ABSTRACTION_H_

#include <iostream>

// 实现实际上会是在 .cpp 文件中， 所以头文件不会包含 Implementor.h 和
// ConcreteImplementor**.h 。 客户并不会知道 Implementor** 对象。 Abstraction
// 内部的指针成员也只需要前置声明即可。 分离了 Implementor 和 Abstraction ，
// 有助于降低对实现部分的依赖， 假如修改其中的一个 Implementor 具体实现类，
// 并不需要重新编译。 这里因为只用了接口在头文件里面实现，
// 所以要包含下具体类的头文件。
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "Implementor.h"

class Implementor;

class Abstraction {
 private:
  Implementor *implementor_;

  //  protected:
  //   Implementor *GetImplementor() {
  //     std::cout << "Abstraction gets the Implementor.\n";
  //     return new ConcreteImplementorA();
  //   }

 public:
  // 根据实际需要选择初始化 new 的实例对象。
  Abstraction(Implementor *implementor) : implementor_(implementor) {
    std::cout << "Abstraction is constructed.\n";
  }
  virtual ~Abstraction() {
    delete implementor_;
    std::cout << "Abstraction is deconstructed.\n";
  }

  // 这些操作里面可以增加一些 Abstraction 的其他操作， 也就是说 Abstraction
  // 的接口比 Implementor 层次高一些。
  virtual void OperationImpA() {
    std::cout << "Here is OperationImpA of Abstraction.\n";
    implementor_->OperationImpA();
  }

  virtual void OperationImpB1() {
    std::cout << "Here is OperationImpB1 of Abstraction.\n";
    implementor_->OperationImpB1();
  }

  virtual void OperationImpB2() {
    std::cout << "Here is OperationImpB2 of Abstraction.\n";
    implementor_->OperationImpB2();
  }

  // 不需要和 Implementor 对象接口保持一致。 也可以增加方法，
  // 层次可以高于或着独立于 Implementor 。
};
#endif  // !ABSTRACTION_H_