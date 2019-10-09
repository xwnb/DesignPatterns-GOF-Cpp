#ifndef CONCRETEREVERSEITERATOR_H_
#define CONCRETEREVERSEITERATOR_H_

#include "ConcreteAggregate.h"
#include "Iterator.h"

template <typename Item>
class ConcreteAggregate;

template <typename Item>
class ConcreteReverseIterator : public Iterator<Item> {
 private:
  const ConcreteAggregate<Item> *aggregate_;
  int current_;

 public:
  ConcreteReverseIterator(const ConcreteAggregate<Item> *aggregate)
      : aggregate_(aggregate), current_(0) {}

  virtual ~ConcreteReverseIterator() { delete aggregate_; }

  virtual void First() { current_ = aggregate_->Count() - 1; }

  virtual void Next() { --current_; }

  virtual bool IsDone() const { return current_ < 0; }

  virtual Item CurrentItem() const {
    if (IsDone()) {
      throw "IteratorOutOfBounds";
    }
    return aggregate_->Get(current_);
  }
};
#endif  // !CONCRETEREVERSEITERATOR_H_
