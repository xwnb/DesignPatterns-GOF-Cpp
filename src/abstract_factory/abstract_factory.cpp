/**
 * 效果：
 * 分离了具体的类： 对于客户来说， 客户只接触到抽象的产品类接口；
 * 具体的产品的类名也在具体工厂中实现了分离。
 *
 *
 * 易于交换产品系列： 一个抽象工厂创建了一个完整的产品系列，
 * 如果需要修改产品系列， 只需要在具体的工厂配置不同的产品。
 *
 * 有利于产品的一致性： 一个具体工厂实现的是一个系列的产品，
 * 客户也只能使用这个系列中的产品
 *
 * 难以支持新种类的产品： 如果增加新产品， 那么就需要扩展抽象工厂的接口，
 * 这就涉及到所有具体工厂的修改。 这个时候， 工厂方法可能更适合扩展
 * （创建对象时， 通过增加一个参数来标识）
 */

#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main(int argc, char const *argv[]) {
  // 这里创建 Product_*1， 通过工厂方法创建时， 客户不需要关注
  // Product到底是怎么被创建的， 下同
  AbstractFactory *factory_1 = new ConcreteFactory1();
  AbstractProductA *product_a1 = factory_1->CreateProductA();
  AbstractProductB *product_b1 = factory_1->CreateProductB();

  delete product_a1;
  delete product_b1;

  // 如果要增加新的产品 Product_*2， 那么实际上我们通过新建一个工厂类，
  // 通过这个新建的工厂类来创建新产品。
  // 假如通过工厂方法，那么需要在工厂方法内部增加判断新增的产品种类，
  // 不符合开闭原则。
  AbstractFactory *factory_2 = new ConcreteFactory2();
  AbstractProductA *product_a2 = factory_2->CreateProductA();
  AbstractProductB *product_b2 = factory_2->CreateProductB();

  delete product_a1;
  delete product_b1;

  return 0;
}
