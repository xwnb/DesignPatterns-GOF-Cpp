/**
 *
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <string>

class Subject {
 private:
  /* data */

 public:
  Subject(/* args */) {}
  virtual ~Subject() {}

  virtual std::string Name() = 0;

  virtual void SetName(std::string name) = 0;

  virtual void Request() = 0;
};

#endif  // !SUBJECT_H_
