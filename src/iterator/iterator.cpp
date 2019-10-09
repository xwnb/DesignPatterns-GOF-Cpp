#include <iostream>
#include <vector>

#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "Employee.h"

void PrintEmployees(Iterator<Employee *> &i) {
  for (i.First(); !i.IsDone(); i.Next()) {
    std::cout << i.CurrentItem()->Name() << std::endl;
  }
}

int main(int argc, char const *argv[]) {
  Aggregate<Employee *> *employees = new ConcreteAggregate<Employee *>(10);
  employees->Append(new Employee("wang_er"));
  employees->Append(new Employee("zhang_san"));
  employees->Append(new Employee("li_si"));
  employees->Append(new Employee("wang_wu"));

  // 顺序迭代
  // 倒叙迭代
  Iterator<Employee *> *iterator = employees->CreateIterator();
  PrintEmployees(*iterator);
  delete iterator;

  return 0;
}
