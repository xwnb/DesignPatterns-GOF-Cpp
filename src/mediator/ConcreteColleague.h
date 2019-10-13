/**
 *
 */

#ifndef CONCRETE_COLLEAGUE_H_
#define CONCRETE_COLLEAGUE_H_

#include <iostream>
#include <string>
#include "Colleague.h"
// #include "ConcreteMediator.h"

class ConcreteColleagueA : public Colleague {
 private:
  /* data */
 public:
  ConcreteColleagueA(std::string name, Mediator *mediator)
      : Colleague(name, mediator) {
    std::cout << Name() << " (ColleagueA) is constructed.\n";
  }
  virtual ~ConcreteColleagueA() {
    std::cout << Name() << " (ColleagueA) is constructed.\n";
  }

  virtual void Event(std::string event) {
    std::cout << Name() << " (ColleagueA): Send a event: " << event
              << std::endl;
    EmitEvent(Name(), event);
  }

  virtual void ReceiveEvent(std::string receiver, std::string event) {
    std::cout << Name() << " (ColleagueA): Received a event: " << event
              << ", from: " << receiver << std::endl;
    std::cout << Name() << " (ColleagueA): TODO some operations.\n";
  }
};

class ConcreteColleagueB : public Colleague {
 private:
  /* data */
 public:
  ConcreteColleagueB(std::string name, Mediator *mediator)
      : Colleague(name, mediator) {
    std::cout << Name() << " (ColleagueB) is constructed.\n";
  }
  virtual ~ConcreteColleagueB() {
    std::cout << Name() << " (ColleagueB) is deconstructed.\n";
  }

  virtual void Event(std::string event) {
    std::cout << Name() << " (ColleagueB): Send a event: " << event
              << std::endl;
    EmitEvent(Name(), event);
  }

  virtual void ReceiveEvent(std::string receiver, std::string event) {
    std::cout << Name() << " (ColleagueB): Received a event: " << event
              << ", from: " << receiver << std::endl;
    std::cout << Name() << " (ColleagueB): TODO some operations.\n";
  }
};

class ConcreteColleagueC : public Colleague {
 private:
  /* data */
 public:
  ConcreteColleagueC(std::string name, Mediator *mediator)
      : Colleague(name, mediator) {
    std::cout << Name() << " (ColleagueC) is constructed.\n";
  }
  virtual ~ConcreteColleagueC() {
    std::cout << Name() << " (ColleagueC) is deconstructed.\n";
  }

  virtual void Event(std::string event) {
    std::cout << Name() << " (ColleagueC): Send a event: " << event
              << std::endl;
    EmitEvent(Name(), event);
  }

  virtual void ReceiveEvent(std::string receiver, std::string event) {
    std::cout << Name() << " (ColleagueC): Received a event: " << event
              << ", from: " << receiver << std::endl;
    std::cout << Name() << " (ColleagueC): TODO some operations.\n";
  }
};

#endif  // !CONCRETE_COLLEAGUE_H_