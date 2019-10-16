/**
 *
 */

#ifndef TERMINAL_EXPRESSION_H_
#define TERMINAL_EXPRESSION_H_

#include <iostream>
#include <string>
#include "AbstractExpression.h"
#include "Context.h"

class ConstantExpression : public AbstractExpression {
 private:
  /* data */
  bool b_;

 public:
  ConstantExpression(bool b) : b_(b) {
    std::cout << "ConstantExpression: Constructed.\n";
  }

  virtual ~ConstantExpression() {
    std::cout << "ConstantExpression: Deconstructed.\n";
  }

  virtual bool Interpret(Context *context) {
    return b_;
  }
};

class VariableExpression : public AbstractExpression {
 private:
  /* data */
  char ch_;

 public:
  VariableExpression(char ch) : ch_(ch) {
    std::cout << "VariableExpression: Constructed.\n";
  }

  virtual ~VariableExpression() {
    std::cout << "VariableExpression: Deconstructed.\n";
  }

  virtual bool Interpret(Context *context) {
    return context->Lookup(ch_);
  }
};

#endif  // !TERMINAL_EXPRESSION_H_
