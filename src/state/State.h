/**
 *
 */

#ifndef STATE_H_
#define STATE_H_

#include "Context.h"
class Context;

class State {
 public:
  virtual void Handle(Context *context) = 0;
};

#endif  // !STATE_H_