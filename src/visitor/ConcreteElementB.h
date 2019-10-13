

#ifndef CONCRETE_ELEMENT_B_H_
#define CONCRETE_ELEMENT_B_H_

#include "Element.h"
#include "Visitor.h"

class ConcreteElementB : public Element {
 private:
  /* data */

 public:
  ConcreteElementB(std::string name, int data) : Element(name, data) {
    std::cout << "ElementB: Constructed.\n";
  }
  virtual ~ConcreteElementB() {
    std::cout << "ElementB: Deconstructed.\n";
  }

  // int OperationB() {
  //   int ret = Element::Data() * 2;
  //   std::cout << "ElementB: OperationB: Mul B's Data.\n";
  //   return ret;
  // }

  // virtual std::string Name() {
  //   return Element::Name() + " By B";
  // }

  // virtual int Data() {
  //   return Element::Data() * 3;
  // }

  virtual void Accept(Visitor *v) {
    std::cout << "ElementB: Accept a Visitor...\n";
    v->VisitConcreteElementB(this);
  }
};

#endif  // !CONCRETE_ELEMENT_B_H_
