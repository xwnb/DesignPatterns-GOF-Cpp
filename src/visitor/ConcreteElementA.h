

#ifndef CONCRETE_ELEMENT_A_H_
#define CONCRETE_ELEMENT_A_H_

#include "Element.h"
#include "Visitor.h"

class ConcreteElementA : public Element {
 private:
  /* data */

 public:
  ConcreteElementA(std::string name, int data) : Element(name, data) {
    std::cout << "ElementA: Constructed.\n";
  }
  virtual ~ConcreteElementA() {
    std::cout << "ElementA: Deconstructed.\n";
  }

  // std::string OperationA() {
  //   std::cout << "ElementA: OperationA: Get A's Name.\n";
  //   return Element::Name();
  // }

  // virtual std::string Name() {
  //   return Element::Name() + " By A";
  // }

  // virtual int Data() {
  //   return Element::Data() * 2;
  // }

  virtual void Accept(Visitor *v) {
    std::cout << "ElementA: Accept a Visitor...\n";
    v->VisitConcreteElementA(this);
  }
};

#endif  // !CONCRETE_ELEMENT_A_H_
