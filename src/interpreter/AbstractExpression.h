/**
 *
 */

#ifndef ABSTRACT_EXPRESSION_H_
#define ABSTRACT_EXPRESSION_H_

#include <iostream>
#include <string>

#define SAFE_DELEET(x) \
  do {                 \
    if ((x)) {         \
      delete (x);      \
      (x) = nullptr;   \
    }                  \
  } while (0)

class Context;

class AbstractExpression {
 private:
  /* data */
 public:
  AbstractExpression(/* args */) {}
  virtual ~AbstractExpression() {}

  virtual bool Interpret(Context *context) = 0;
};

#endif  // !ABSTRACT_EXPRESSION_H_
