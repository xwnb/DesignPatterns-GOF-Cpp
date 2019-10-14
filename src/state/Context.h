/**
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "State.h"

class State;

class Context {
 private:
  /* data */
  // State *state_;

 public:
  Context() {}
  virtual ~Context() {}

  virtual void Request(State *state) {
    if (state == nullptr) {
      return;
    }
    state->Handle(this);
  }
};

#endif  // !CONTEXT_H_