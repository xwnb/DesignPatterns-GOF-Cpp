

#include <iostream>

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"
#include "Element.h"
#include "ObjectStruct.h"
#include "Visitor.h"

int main(int argc, char const *argv[]) {
  ObjectStruct *obj = new ObjectStruct("Obj", 0);
  ConcreteElementA *ea1 = new ConcreteElementA("ea1", 11);
  ConcreteElementB *eb1 = new ConcreteElementB("eb1", 12);
  ConcreteElementB *eb2 = new ConcreteElementB("eb2", 21);
  ConcreteElementA *ea2 = new ConcreteElementA("ea2", 22);

  obj->Push(ea1);
  obj->Push(eb1);
  obj->Push(eb2);
  obj->Push(ea2);

  ConcreteVisitor1 *v1_name = new ConcreteVisitor1();
  ConcreteVisitor2 *v2_data = new ConcreteVisitor2();

  obj->Accept(v1_name);
  obj->Accept(v2_data);

  delete obj;
  delete v1_name;
  delete v2_data;

  return 0;
}
