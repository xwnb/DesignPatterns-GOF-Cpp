#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
 private:
  /* data */
  std::string name_;

 public:
  Employee(std::string name) : name_(name) {}
  ~Employee() {}
  std::string Name() { return name_; }
};

#endif  // !EMPLOYEE_H_
