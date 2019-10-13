/**
 *
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <iostream>
#include <list>
#include <string>
#include <typeinfo>

#include "Observer.h"

class Subject {
 private:
  /* data */
  std::list<Observer *> obs_list_;

 protected:
  std::string name_;

 public:
  Subject(std::string name) : name_(name) {}
  virtual ~Subject() {
    // std::cout << "Delete Observer List.\n";
    // for (auto &obs : obs_list_) {
    //   delete obs;
    // }
  }

  virtual void Attach(Observer *obs) {
    obs_list_.push_back(obs);
  }

  virtual void Detach(Observer *obs) {
    obs_list_.remove(obs);
  }

  virtual void Notify() {
    std::cout << "Subject " << name_ << " Send: " << GetState() << std::endl;
    for (const auto &obs : obs_list_) {
      obs->Update(this);
    }
  }

  virtual std::string GetState() = 0;

  virtual void SetState(std::string state) = 0;
};

#endif  // !SUBJECT_H_
