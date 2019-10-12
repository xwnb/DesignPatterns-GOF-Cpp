#ifndef STRATEGY_H_
#define STRATEGY_H_

class Context;

class Strategy {
 private:
  /* data */
 public:
  Strategy(/* args */) {}
  virtual ~Strategy() {}

  virtual void AlgorithmInterface(Context *context) = 0;
};

#endif  // !STRATEGY_H_