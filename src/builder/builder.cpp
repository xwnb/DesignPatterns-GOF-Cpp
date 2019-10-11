#include "Builder.h"
#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"

int main(int argc, char const *argv[]) {
  ConcreteBuilder *builder = new ConcreteBuilder();

  Director director;
  director.Construct(builder);

  // 这里应该用 prototype 把产品 clone 否则在 delete ConcreteBuilder
  // 时，会释放掉 product
  Product *product = builder->GetResult();
  std::cout << "Show Product info:\n";
  std::cout << product->part_a << std::endl;
  std::cout << product->part_b << std::endl;
  std::cout << product->part_c << std::endl;

  delete builder;

  return 0;
}
