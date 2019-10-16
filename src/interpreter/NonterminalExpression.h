/**
 *
 */

#ifndef NONTERMINAL_EXPRESSION_A_H_
#define NONTERMINAL_EXPRESSION_A_H_

#include <iostream>
#include <string>

#include "AbstractExpression.h"

class Context;

class AndExpression : public AbstractExpression {
 private:
  /* data */
  AbstractExpression *left_;
  AbstractExpression *right_;

 public:
  AndExpression(AbstractExpression *left, AbstractExpression *right)
      : left_(left), right_(right) {
    std::cout << "AndExpression: Constructed.\n";
  }

  virtual ~AndExpression() {
    SAFE_DELEET(left_);
    SAFE_DELEET(right_);
    std::cout << "AndExpression: Deconstructed.\n";
  }

  virtual bool Interpret(Context *context) {
    return left_->Interpret(context) && right_->Interpret(context);
  }
};

class OrExpression : public AbstractExpression {
 private:
  /* data */
  AbstractExpression *left_;
  AbstractExpression *right_;

 public:
  OrExpression(AbstractExpression *left, AbstractExpression *right)
      : left_(left), right_(right) {
    std::cout << "OrExpression: Constructed.\n";
  }

  virtual ~OrExpression() {
    SAFE_DELEET(left_);
    SAFE_DELEET(right_);
    std::cout << "OrExpression: Deconstructed.\n";
  }

  virtual bool Interpret(Context *context) {
    return left_->Interpret(context) || right_->Interpret(context);
  }
};

class NotExpression : public AbstractExpression {
 private:
  /* data */
  AbstractExpression *exp_;

 public:
  NotExpression(AbstractExpression *exp) : exp_(exp) {
    std::cout << "NotExpression: Constructed.\n";
  }

  virtual ~NotExpression() {
    // SAFE_DELEET(exp_);
    std::cout << "NotExpression: Deconstructed.\n";
  }

  virtual bool Interpret(Context *context) {
    return !exp_->Interpret(context);
  }
};

#endif  // !NONTERMINAL_EXPRESSION_A_H_
