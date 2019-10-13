/**
 *
 */

#ifndef MEMENTO_H_
#define MEMENTO_H_

#include <iostream>
#include <string>

class Originator;

struct State {
  int value;
  std::string name;
};

class Memento {
 private:
  /* data */
  State state_;
  friend class Originator;

  Memento(State &state) : state_(state) {
    std::cout << "Memento: Constructed.\n";
    std::cout << "Memento: Create State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
  }

  void SetState(const State &state) {
    // 这里是深拷贝， 可以用原型模式 Clone
    state_.value = state.value;
    state_.name = state.name;
    std::cout << "Memento: Set State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
  }

  State GetState() {
    std::cout << "Memento: Get State: value = " << state_.value
              << ", name = " << state_.name << std::endl;
    return state_;
  }

 public:
  virtual ~Memento() {
    std::cout << "Memento: Deconstructed.\n";
  }
};

#endif  // !MEMENTO_H_