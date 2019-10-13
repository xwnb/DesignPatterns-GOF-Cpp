/**
 *
 */

#ifndef CARETAKER_H_
#define CARETAKER_H_

#include <iostream>
#include <list>
#include "Memento.h"

class Caretaker {
 private:
  /* data */
  std::list<Memento *> memento_list_;

 public:
  Caretaker(/* args */) {
    std::cout << "Caretaker: Constructed.\n";
  }
  virtual ~Caretaker() {
    std::cout << "Caretaker: Deconstructed.\n";
  }

  Memento *GetMemento() {
    if (memento_list_.size() == 0) {
      std::cout << "Memento List is Emtpy.\n";
      return nullptr;
    }
    Memento *ret = memento_list_.front();
    memento_list_.remove(ret);
    return ret;
  }

  void SetMemento(Memento *memento) {
    if (memento == nullptr) {
      std::cout << "Memento is Empty, Store Failed.\n";
    }
    memento_list_.push_back(memento);
  }
};

#endif  // !CARETAKER_H_