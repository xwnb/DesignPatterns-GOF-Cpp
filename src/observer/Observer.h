/**
 *
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Subject;

class Observer {
 private:
  /* data */

 public:
  Observer(/* args */) {}
  virtual ~Observer() {
    std::cout << "delete Observer.\n";
  }

  virtual void Update(Subject *sub) = 0;
};

#endif  // !OBSERVER_H_
