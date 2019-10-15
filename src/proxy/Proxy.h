/**
 *
 */

#ifndef PROXY_H_
#define PROXY_H_

#include <iostream>
#include <string>

#include "RealSubject.h"
#include "Subject.h"

class Proxy : public Subject {
 private:
  /* data */
  std::string name_;
  RealSubject *real_subject_;

 public:
  Proxy(std::string name) : name_(name), real_subject_(nullptr) {
    std::cout << "Proxy: Constructed.\n";
  }
  virtual ~Proxy() {
    std::cout << "Proxy: Deconstructed.\n";
    std::cout << "Proxy: Delete Real Subject.\n";
    delete real_subject_;
    real_subject_ = nullptr;
  }

  virtual void SetName(std::string name) {
    if (real_subject_ == nullptr) {
      real_subject_ = new RealSubject(name);
      real_subject_->SetName(name);
    }
    name_ = name;
  }

  virtual std::string Name() {
    std::cout << "Proxy: " << name_ << std::endl;
    return name_;
  }

  virtual void Request() {
    std::cout << "Proxy: Proxy Request.\n";
    if (real_subject_ == nullptr) {
      std::cout << "Proxy: Create Real Subject.\n";
      real_subject_ = new RealSubject(name_);
    }
    std::cout << "Proxy: Transfer to RealSubject Requst.\n";
    real_subject_->Request();
  }
};

#endif  // !PROXY_H_
