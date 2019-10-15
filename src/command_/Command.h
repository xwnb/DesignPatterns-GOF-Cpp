/**
 *
 */

#ifndef COMMAND_H_
#define COMMAND_H_

#include <iostream>
#include <string>

class Command {
 private:
  /* data */
 public:
  Command(/* args */) {}
  virtual ~Command() {}

  virtual void Execute() = 0;
};

#endif  // !COMMAND_H_
