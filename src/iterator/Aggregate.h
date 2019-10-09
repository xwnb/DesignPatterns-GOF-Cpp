#ifndef AGGREGATE_H_
#define AGGREGATE_H_

#include "Iterator.h"

template <typename Item>
class Aggregate {
 public:
  Aggregate() {}

  virtual ~Aggregate() {}

  virtual int Count() const = 0;

  virtual Item &Get(int index) const = 0;

  virtual int Append(Item item) = 0;

  virtual Iterator<Item> *CreateIterator() = 0;
};

#endif  // !AGGREGATE_H_
