/**
 *
 */

#ifndef ORIGINATOR_H_
#define ORIGINATOR_H_

#include <iostream>
#include <string>

#include "Memento.h"

class Originator {
 private:
  /* data */
  State state_;

 public:
  Originator(/* args */) {
    std::cout << "Originator: Constructed.\n";
  }
  virtual ~Originator() {
    std::cout << "Originator: Deconstructed.\n";
  }

  void SetState(State &state) {
    state_.value = state.value;
    state_.name = state.name;
    std::cout << "Originator: Set State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
  }

  State GetState() {
    std::cout << "Originator: Get State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
    return state_;
  }

  Memento *CreateMemento() {
    std::cout << "Originator: CreateMemento State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
    return new Memento(state_);
  }

  void SetMemento(Memento *memento) {
    if (memento == nullptr) {
      std::cout << "Memento is Empty, Restore Failed.\n";
      return;
    }
    State state = memento->GetState();
    state_.value = state.value;
    state_.name = state.name;
    std::cout << "Originator: SetMemento State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
  }
};

#endif  // !ORIGINATOR_H_