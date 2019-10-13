

#ifndef OBJECT_STRUCT_H_
#define OBJECT_STRUCT_H_

#include <iostream>
#include <list>
#include <string>

#include "Element.h"
#include "Visitor.h"

class ObjectStruct : public Element {
 private:
  /* data */
  std::list<Element *> el_list_;

 public:
  ObjectStruct(std::string name, int data) : Element(name, data) {
    std::cout << "ObjectStruct: Constructed.\n";
  }
  virtual ~ObjectStruct() {
    std::cout << "ObjectStruct: Delete Children.\n";
    for (auto &el : el_list_) {
      delete el;
    }
    std::cout << "ObjectStruct: Deconstructed.\n";
  }

  virtual void Push(Element *el) {
    std::cout << "ObjectStruct: Push Element.\n";
    el_list_.push_back(el);
  }

  virtual void Remove(Element *el) {
    std::cout << "ObjectStruct: Remove Element.\n";
    el_list_.remove(el);
  }

  virtual void Accept(Visitor *v) {
    std::cout << "ObjectStruct: Accept a Visitor...\n";
    for (auto &el : el_list_) {
      el->Accept(v);
    }
  }
};

#endif  // !CONCRETE_ELEMENT_B_H_
