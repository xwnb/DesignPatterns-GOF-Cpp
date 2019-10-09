#include "ConcreteCreator.h"
#include "ConcreteProduct.h"

int main(int argc, char const *argv[]) {
  Creator *factory = new ConcreteCreator();

  Product *product_a = factory->FactoryMethod("Zhang-san");
  Product *product_b = factory->FactoryMethod("Li-si");
  Product *product_c = factory->FactoryMethod("Wang-wu");

  product_a->SayHello();
  product_b->SayHello();
  product_c->SayHello();

  delete factory;
  delete product_a;
  delete product_b;
  delete product_c;

  return 0;
}
