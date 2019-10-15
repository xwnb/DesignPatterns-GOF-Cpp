/**
 *
 */

#ifndef INVOKER_H_
#define INVOKER_H_

#include <iostream>
#include <list>
#include <string>
#include "Command.h"

class Invoker {
 private:
  /* data */
  std::list<Command*> commands_;

 public:
  Invoker(/* args */) {
    std::cout << "Invoker: Constructed.\n";
  }
  virtual ~Invoker() {
    std::cout << "Invoker: Delete Commands.\n";
    for (auto& c : commands_) {
      delete c;
      commands_.remove(c);
      c = nullptr;
    }
    std::cout << "Invoker: Deconstructed.\n";
  }

  virtual void Add(Command* c) {
    commands_.push_back(c);
  }

  virtual void Remove(Command* c) {
    commands_.remove(c);
  }

  virtual void Execute() {
    for (auto& c : commands_) {
      c->Execute();
    }
  }
};

#endif  // !INVOKER_H_
