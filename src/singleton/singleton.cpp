#include <iostream>

#include "Signleton.h"

int main(int argc, char const *argv[]) {
  // 饿汉模式
  HungrySingleton *hungry_singleton_1 = HungrySingleton::Instance();
  HungrySingleton *hungry_singleton_2 = HungrySingleton::Instance();
  if (hungry_singleton_1 == hungry_singleton_2) {
    std::cout << "It is unique singleton(Hunger).\n";
  } else {
    std::cout << "It is NOT unique singleton(Hunger).\n";
  }

  // 懒汉模式，线程安全
  IdlerSingleton *idler_singleton_1 = IdlerSingleton::Instance();
  IdlerSingleton *idler_singleton_2 = IdlerSingleton::Instance();
  if (idler_singleton_1 == idler_singleton_2) {
    std::cout << "It is unique singleton(Idler).\n";
  } else {
    std::cout << "It is NOT unique singleton(Idler).\n";
  }

  // 懒汉模式，线程安全
  ThreadSafeSingleton *thread_safe_singleton_1 =
      ThreadSafeSingleton::Instance();
  ThreadSafeSingleton *thread_safe_singleton_2 =
      ThreadSafeSingleton::Instance();
  if (thread_safe_singleton_1 == thread_safe_singleton_2) {
    std::cout << "It is unique singleton(Thread safe).\n";
  } else {
    std::cout << "It is NOT unique singleton(Thread safe).\n";
  }

  return 0;
}
