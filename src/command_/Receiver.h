/**
 *
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_

#include <iostream>
#include <string>

class Receiver {
 private:
  /* data */
 public:
  Receiver(/* args */) {
    std::cout << "Receiver: Constructed.\n";
  }
  virtual ~Receiver() {
    std::cout << "Receiver: Deconstructed.\n";
  }

  virtual void ActionA() {
    std::cout << "Receiver: Execute Action A.\n";
  }

  virtual void ActionB() {
    std::cout << "Receiver: Execute Action B.\n";
  }
};

#endif  // !RECEIVER_H_
