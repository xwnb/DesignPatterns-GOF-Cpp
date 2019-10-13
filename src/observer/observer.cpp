/**
 *
 */

#include <ctime>
#include <iostream>
#include <string>

#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
#include "Observer.h"
#include "Subject.h"

void Clock(Subject *sub, int count) {
  int i = 0;

  time_t time_now;
  clock_t start, finish;
  start = clock();

  while (1) {
    finish = clock();
    time_now = time(nullptr);
    if (finish - start >= CLOCKS_PER_SEC) {
      sub->SetState(std::to_string((long)time_now) + ": Hello, World.");
      sub->Notify();
      start = finish;
      ++i;
      if (i > count) {
        break;
      }
    }
  }
  return;
}

int main(int argc, char const *argv[]) {
  Subject *subject = new ConcreteSubject("Subject1");
  Observer *observer_a = new ConcreteObserverA("observer_a");
  Observer *observer_b = new ConcreteObserverB("observer_b");

  subject->Attach(observer_a);
  subject->Attach(observer_b);
  std::cout << "start 1\t: ----------------------------\n";
  Clock(subject, 5);
  std::cout << "end 1\t: ----------------------------\n";

  Observer *observer_c = new ConcreteObserverA("observer_c");
  subject->Attach(observer_c);
  std::cout << "start 2\t: ----------------------------\n";
  Clock(subject, 5);
  std::cout << "end 2\t: ----------------------------\n";

  subject->Detach(observer_b);
  std::cout << "start 3\t: ----------------------------\n";
  Clock(subject, 5);
  std::cout << "end 3\t: ----------------------------\n";

  // 这样delete会出现段错误，观察者列表中成员没法判断什么时候被delete
  // delete observer_c; //
  std::cout << "start 4\t: ----------------------------\n";
  Clock(subject, 5);
  std::cout << "end 4\t: ----------------------------\n";

  delete subject;
  delete observer_a;
  delete observer_b;
  delete observer_c;

  return 0;
}
