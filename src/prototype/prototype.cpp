#include <iostream>

#include "ConcretePrototype.h"

int main(int argc, char const *argv[]) {
  //
  Prototype *pa1 = new ConcretePrototypeA();

  // 这里和直接new区别不大，相当于 new ConcretePrototypeA()
  Prototype *pa2_cloned = pa1->Clone();

  // 假如 pa1 做了一些操作，改变了成员变量，这个时候如果需要新建一个和 pa1
  // 完全一致的对象，那就要进行深拷贝。不能 new ConcretePrototypeA()，否则对 pa1
  // 做过的操作需要重新再对 pa3 重复一遍
  Prototype *pa3_cloned = pa1->Clone();

  // 如果 pb1
  // 是内部封装好的一个类，比如客户也是通过工厂方法建立返回的对象（这时候暴露给用户的也只有
  // Prototype 这个类型）。如果这时候用户需要 克隆一个该对象，那也可以调用
  // Clone。这里的 Clone 返回对象是 Prototype , 虽然实际子类是
  // ConcretePrototypeB。但是因为用户并不需要知道返回的具体子类是什么，实现了封装。
  Prototype *pb1 = new ConcretePrototypeB();

  // 这里可以对 pb1 的数据成员做过处理
  Prototype *pb2_cloned = pb1->Clone();

  return 0;
}
