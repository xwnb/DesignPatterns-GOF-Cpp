#ifndef LEAF_H_
#define LEAF_H_

#include <iostream>
#include <string>
#include "Component.h"

/**
 * 表示叶节点， 没有子节点
 * 定义对象的行为
 */
class Leaf : public Component {
 private:
  std::string name_;

 public:
  Leaf(std::string name) : name_(name) {
    std::cout << "Leaf " << name_ << " is constructed.\n";
  }
  virtual ~Leaf() {
    std::cout << "Leaf " << name_ << " is deconstructed.\n";
  }

  virtual std::string Name() {
    return name_;
  }

  virtual void Operation() {
    std::cout << "Leaf name: " << name_ << std::endl;
    // std::cout << "Operation of Leaf.\n";
  }
};

#endif  // !LEAF_H_
