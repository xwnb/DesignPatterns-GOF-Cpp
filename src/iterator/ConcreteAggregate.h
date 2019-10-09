#ifndef CONCRETEAGGREGATE_H_
#define CONCRETEAGGREGATE_H_

#include <string>
#include <vector>

#include "Aggregate.h"
#include "ConcreteIterator.h"
#include "ConcreteReverseIterator.h"

#define DEFAULT_ITEM_CAPACITY 20

template <typename Item>
class ConcreteAggregate : public Aggregate<Item> {
 private:
  Item *items_ = nullptr;
  int size_;
  int last_;

 public:
  ConcreteAggregate(int size = DEFAULT_ITEM_CAPACITY)
      : items_(new Item[size]), size_(size), last_(0) {}

  virtual ~ConcreteAggregate() { delete[] items_; }

  virtual int Count() const { return last_; }

  virtual Item &Get(int index) const { return *(items_ + index); }

  virtual int Append(Item item) {
    if (last_ >= size_) {
      return -1;
    }
    items_[last_] = item;
    ++last_;

    return 0;
  }

  virtual Iterator<Item> *CreateIterator() {
    // 顺序迭代器
    // return new ConcreteIterator<Item>(this);

    //倒叙迭代器
    return new ConcreteReverseIterator<Item>(this);
  }
};

#endif  // !CONCRETEAGGREGATE_H_
