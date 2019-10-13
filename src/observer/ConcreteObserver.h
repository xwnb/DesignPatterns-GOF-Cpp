/**
 *
 */

#ifndef CONCRETE_OBSERVER_H_
#define CONCRETE_OBSERVER_H_

#include <iostream>
#include <string>
#include "Observer.h"
#include "Subject.h"

class ConcreteObserverA : public Observer {
 private:
  /* data */
  std::string name_;

 public:
  ConcreteObserverA(std::string name) : name_(name) {
    std::cout << "ConcreteObserverA " << name_ << " is constructed.\n";
  }
  virtual ~ConcreteObserverA() {
    std::cout << "ConcreteObserverA " << name_ << " is deconstructed.\n";
  }

  virtual void Update(Subject *sub) {
    std::cout << "Observer " << name_ << " Received: " << sub->GetState()
              << std::endl;
  }
};

class ConcreteObserverB : public Observer {
 private:
  /* data */
  std::string name_;

 public:
  ConcreteObserverB(std::string name) : name_(name) {
    std::cout << "ConcreteObserverB " << name_ << " is constructed.\n";
  }
  virtual ~ConcreteObserverB() {
    std::cout << "ConcreteObserverB " << name_ << " is deconstructed.\n";
  }

  virtual void Update(Subject *sub) {
    std::cout << "Observer " << name_ << " Received: " << sub->GetState()
              << std::endl;
  }
};

#endif  // !CONCRETE_OBSERVER_H_
