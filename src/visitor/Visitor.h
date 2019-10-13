/**
 *
 */

#ifndef VISITOR_H_
#define VISITOR_H_

// #include "ConcreteElementA.h"
// #include "ConcreteElementB.h"
class ConcreteElementA;
class ConcreteElementB;

class Visitor {
 private:
  /* data */
 public:
  Visitor(/* args */) {}
  virtual ~Visitor() {}

  virtual void VisitConcreteElementA(ConcreteElementA *ea) = 0;

  virtual void VisitConcreteElementB(ConcreteElementB *eb) = 0;
};

#endif  // !VISITOR_H_