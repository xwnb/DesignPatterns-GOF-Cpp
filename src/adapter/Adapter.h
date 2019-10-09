#ifndef ADAPTER_H_
#define ADAPTER_H_

#include "Adaptee.h"
#include "Target.h"

/**
 * 类适配器，共有继承接口（对外调用接口），私有继承被适配者（隐藏实际被适配对象）
 */

class ClassAdapter : public Target, private Adaptee {
 private:
  /* data */
 public:
  ClassAdapter(/* args */) {}

  virtual ~ClassAdapter() {}

  // 适配接口：给用户调用的，实际上调用的是 Adaptee::SpecficRequest()
  virtual void Request() {
    std::cout << "This is ClassAdapter request call to...\n";
    Adaptee::SpecificRequest();
  }
};

/**
 * 对象适配器，对象组合；
 * 被适配对象是传入的，意味着所有 Adaptee 及其子类都可以被适配
 *
 */

class ObjectAdapter : public Target {
 private:
  Adaptee *adaptee_;

 public:
  ObjectAdapter(Adaptee *adaptee) : adaptee_(adaptee) {}

  virtual ~ObjectAdapter() {
    delete adaptee_;
  }

  virtual void Request() {
    std::cout << "This is ObjectAdapter request call to...\n";
    adaptee_->SpecificRequest();
  }
};

#endif  // !ADAPTER_H_