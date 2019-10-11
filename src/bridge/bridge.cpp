/**
 * 动机：当抽象有多个实现时， 需要通过继承来处理。
 * 因为抽象类的接口和具体类的实现时绑定在一起的，
 * 难以对抽象部分和实现部分分别独立的修改。
 */

/**
 * 效果：
 * 分离了接口和实现部分： 实现在 Implementor 及其子类中， Abstraction
 * 的接口可以在运行时刻进行配置。 （这里我的理解是： Abstraction 的并不依赖于
 * Implementor， 即 Abstraction 并不需要 Implementor 的实例化类。
 * 所以在运行的时候， 如果只改变了 Implementor 的实现，
 * Abstraction并不需要重新编译）。 “当改变一个实现类时， 并不需要重新编译
 * Abstraction 和它的客户程序。 为保证一个类库的不同版本之间的二进制兼容性，
 * 必须要有这个性质”
 *
 * 提高可扩充性： 可以独立的对 Implementor 和 Abstraction 的层次结构进行扩充
 *
 * 细节对客户透明： 可以对客户隐藏实现细节
 */

#include <iostream>

#include "Abstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"

int main(int argc, char const *argv[]) {
  Abstraction *abstraction = new Abstraction(new ConcreteImplementorA());
  abstraction->OperationImpA();
  abstraction->OperationImpB1();
  abstraction->OperationImpB2();
  delete abstraction;

  RefinedAbstraction *refined_abstraction =
      new RefinedAbstraction(new ConcreteImplementorB());
  refined_abstraction->OperationImpA();
  refined_abstraction->OperationImpB();
  delete refined_abstraction;

  return 0;
}
