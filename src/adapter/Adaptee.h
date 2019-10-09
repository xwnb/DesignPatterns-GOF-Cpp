#ifndef ADAPTEE_H_
#define ADAPTEE_H_

#include <iostream>

class Adaptee {
 private:
  /* data */
 public:
  Adaptee(/* args */) {}

  virtual ~Adaptee() {}

  // 被适配接口（实际Client调用到的函数）
  virtual void SpecificRequest() {
    std::cout << "Adaptee specific request is called.\n";
  }
};

class SubAdaptee : public Adaptee {
 private:
  /* data */
 public:
  SubAdaptee(/* args */) {}

  virtual ~SubAdaptee() {}

  // 被适配接口（实际Client调用到的函数）
  virtual void SpecificRequest() {
    std::cout << "SubAdaptee specific request is called.\n";
  }
};

#endif  // !ADAPTEE_H_