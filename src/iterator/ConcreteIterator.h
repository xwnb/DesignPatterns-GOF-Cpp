#ifndef CONCRETEITERATOR_H_
#define CONCRETEITERATOR_H_

#include "ConcreteAggregate.h"
#include "Iterator.h"

template <typename Item>
class ConcreteAggregate;

template <typename Item>
class ConcreteIterator : public Iterator<Item> {
 private:
  const ConcreteAggregate<Item> *aggregate_;
  int current_;

 public:
  ConcreteIterator(const ConcreteAggregate<Item> *aggregate)
      : aggregate_(aggregate), current_(0) {}

  virtual ~ConcreteIterator() { delete aggregate_; }

  virtual void First() { current_ = 0; }

  virtual void Next() { ++current_; }

  virtual bool IsDone() const { return current_ >= aggregate_->Count(); }

  virtual Item CurrentItem() const {
    if (IsDone()) {
      throw "IteratorOutOfBounds";
    }
    return aggregate_->Get(current_);
  }
};
#endif  // !CONCRETEITERATOR_H_
