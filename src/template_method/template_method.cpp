#include <iostream>

#include "ConncreteClass.h"

int main(int argc, char const *argv[]) {
  AbstractClass *parent = new ConncreteClassSubA();
  parent->TemplateMethod();

  parent = new ConncreteClassSubB();
  parent->TemplateMethod();

  parent = new ConncreteClassSubC();
  parent->TemplateMethod();
  return 0;
}
