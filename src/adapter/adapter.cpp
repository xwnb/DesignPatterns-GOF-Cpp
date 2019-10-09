#include <iostream>

#include "Adapter.h"

int main(int argc, char const *argv[]) {
  // 类适配器
  Target *t = new ClassAdapter();
  t->Request();
  delete t;

  // 对象适配器
  Target *t_obj = new ObjectAdapter(new Adaptee());
  t_obj->Request();
  delete t_obj;

  // 对象适配器可以适配其子类
  Target *t_obj2 = new ObjectAdapter(new SubAdaptee());
  t_obj2->Request();
  delete t_obj2;
  return 0;
}
