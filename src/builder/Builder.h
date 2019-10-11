#ifndef BUILDER_H_
#define BUILDER_H_

#include <iostream>
#include <string>

// 这里的 Product 也可以是一个抽象类
struct Product {
  std::string part_a;
  std::string part_b;
  std::string part_c;
};

class Builder {
 private:
  /* data */
 public:
  Builder() {}
  virtual ~Builder() {}

  // 获取构建产品的结构
  virtual Product *GetResult() {
    return nullptr;
  }

  // 不定义成纯虚函数是为了便于派生类只定义自身感兴趣的方法
  virtual void BuildPartA() {}
  virtual void BuildPartB() {}
  virtual void BuildPartC() {}
};

#endif  // !BUILDER_H_