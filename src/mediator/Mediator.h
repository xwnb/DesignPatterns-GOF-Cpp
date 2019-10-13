/**
 *
 */

#ifndef MEDIATOR_H_
#define MEDIATOR_H_

class Colleague;

class Mediator {
 private:
  /* data */
 public:
  Mediator(/* args */) {}
  virtual ~Mediator() {}

  virtual void CreateColleagues() = 0;

  virtual void EmitEvent(std::string &receiver, std::string &event) = 0;
};

#endif  // !MEDIATOR_H_