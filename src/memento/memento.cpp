/**
 *
 */

// #include "Memento.h"
#include "Caretaker.h"
#include "Originator.h"

class A {
 public:
  int value;
  std::string name;
};

int main(int argc, char const *argv[]) {
  Originator *originator = new Originator();
  Caretaker *caretaker = new Caretaker();

  State state{1, "State1"};
  originator->SetState(state);
  originator->GetState();

  // 创建备忘录
  caretaker->SetMemento(originator->CreateMemento());
  state = {2, "State2"};
  originator->SetState(state);
  originator->GetState();

  // 恢复备忘录
  originator->SetMemento(caretaker->GetMemento());
  originator->GetState();

  // 多次恢复看看能不能正常报错
  originator->SetMemento(caretaker->GetMemento());
  originator->GetState();
  originator->SetMemento(caretaker->GetMemento());
  originator->GetState();

  state = {3, "State3"};
  originator->SetState(state);
  originator->GetState();
  caretaker->SetMemento(originator->CreateMemento());

  state = {4, "State4"};
  originator->SetState(state);
  originator->GetState();
  caretaker->SetMemento(originator->CreateMemento());

  delete originator;
  delete caretaker;

  return 0;
}
