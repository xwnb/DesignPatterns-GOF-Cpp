#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include <iostream>
#include <list>
#include "Component.h"

/**
 * 定义有子部件的那些部件的行为
 * 存储子部件
 * 在 Component 的接口中实现与子部件有关的操作
 *
 *
 * 需要考虑子节点的存储、 查询、 删除等设计更加快速和高效的数据结构和方法
 */

class Composite : public Component {
 private:
  std::string name_;
  std::list<Component *> children_;

 public:
  Composite(std::string name) : name_(name) {
    std::cout << "Composite " << name_ << " is constructed.\n";
  }

  // 在 Composite 被销毁时， 最好由它来销毁子节点
  virtual ~Composite() {
    for (auto &child : children_) {
      delete child;
    }
    std::cout << "Composite " << name_ << " is deconstructed.\n";
  }

  virtual std::string Name() {
    return name_;
  }

  virtual void Operation() {
    std::cout << "Component name: " << name_ << std::endl;
    std::cout << "--Children name of " << name_ << std::endl;
    for (const auto &child : children_) {
      child->Operation();
    }
    // std::cout << "Operation of Composite.\n";
  }

  virtual void Add(Component *component) {
    children_.push_back(component);
    std::cout << component->Name() << " added by " << name_ << std::endl;
  }

  virtual void Remove(Component *component) {
    children_.remove(component);
    std::cout << component->Name() << " removed by " << name_ << std::endl;
  }

  virtual void GetChild(int child) {
    std::cout << "GetChild by Composite.\n";
  }
};

#endif  // !COMPOSITE_H_
