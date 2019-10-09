#ifndef ITERATOR_H_
#define ITERATOR_H_

template <typename Item>
class Iterator {
 public:
  Iterator() {}

  virtual ~Iterator() {}

  virtual void First() = 0;

  virtual void Next() = 0;

  virtual bool IsDone() const = 0;

  virtual Item CurrentItem() const = 0;
};

#endif  // !ITERATOR_H_