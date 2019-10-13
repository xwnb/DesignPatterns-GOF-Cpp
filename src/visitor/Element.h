

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <iostream>
#include <string>

class Visitor;

class Element {
 private:
  /* data */
  std::string name_;
  int data_;

 public:
  Element(std::string name, int data) : name_(name), data_(data) {}
  virtual ~Element() {}

  virtual std::string Name() {
    return name_;
  }

  virtual int Data() {
    return data_;
  }

  // std::string OperationA() {
  //   return "";
  // }

  // int OperationB() {
  //   return -1;
  // }

  virtual void Accept(Visitor *visitor) = 0;
};

#endif  // !ELEMENT_H_
