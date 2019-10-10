#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

class Prototype {
 private:
  /* data */
 public:
  Prototype(/* args */) {}
  virtual ~Prototype() {}

  virtual Prototype *Clone() = 0;
};

#endif  // !PROTOTYPE_H_