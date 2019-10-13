/**
 *
 */

#ifndef CONCRETE_VISITOR_2_H_
#define CONCRETE_VISITOR_2_H_

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "Visitor.h"

class ConcreteVisitor2 : public Visitor {
 private:
  /* data */
 public:
  ConcreteVisitor2(/* args */) {
    std::cout << "Visitor2: Constructed.\n";
  }
  virtual ~ConcreteVisitor2() {
    std::cout << "Visitor2: Deconstructed.\n";
  }

  virtual void VisitConcreteElementA(ConcreteElementA *ea) {
    std::cout << "Visitor2: Visit ElementA To Double Data.\n";
    int ret = ea->Data() * 2;
    std::cout << "Visitor2: Double ElementA's Data: " << ret << std::endl;
  }

  virtual void VisitConcreteElementB(ConcreteElementB *eb) {
    std::cout << "Visitor2: Visit ElementB To Double Data.\n";
    int ret = eb->Data() * 2;
    std::cout << "Visitor2: Double ElementB's Data: " << ret << std::endl;
  }
};

#endif  // !CONCRETE_VISITOR_2_H_