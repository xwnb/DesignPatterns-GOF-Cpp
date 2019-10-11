/**
 * 定义实现类的接口， 不需要与 Abstraction 的接口完全一致
 * （桥接嘛），只需要定义一些基本操作接口， 高层次的操作应该在 Abstraction
 * 里面定义。
 */

#ifndef IMPLEMENTOR_H_
#define IMPLEMENTOR_H_

class Implementor {
 private:
  /* data */
 public:
  Implementor(/* args */) {}
  virtual ~Implementor() {}

  virtual void OperationImpA() = 0;
  virtual void OperationImpB1() = 0;
  virtual void OperationImpB2() = 0;
};

#endif  // !IMPLEMENTOR_H_