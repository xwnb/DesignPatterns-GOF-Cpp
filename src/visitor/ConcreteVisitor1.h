/**
 *
 */

#ifndef CONCRETE_VISITOR_1_H_
#define CONCRETE_VISITOR_1_H_

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "Visitor.h"

class ConcreteVisitor1 : public Visitor {
 private:
  /* data */
 public:
  ConcreteVisitor1(/* args */) {
    std::cout << "Visitor1: Constructed.\n";
  }
  virtual ~ConcreteVisitor1() {
    std::cout << "Visitor1: Deconstructed.\n";
  }

  virtual void VisitConcreteElementA(ConcreteElementA *ea) {
    std::cout << "Visitor1: Visit ElementA To Get Name.\n";
    std::string ret = ea->Name();
    std::cout << "Visitor1: Get ElementA's Name: " << ret << std::endl;
  }

  virtual void VisitConcreteElementB(ConcreteElementB *eb) {
    std::cout << "Visitor1: Visit ElementB To Get Name.\n";
    std::string ret = eb->Name();
    std::cout << "Visitor1: Get ElementB's Name: " << ret << std::endl;
  }
};

#endif  // !CONCRETE_VISITOR_1_H_