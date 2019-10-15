/**
 *
 */

#include "Proxy.h"
#include "RealSubject.h"

int main(int argc, char const *argv[]) {
  Subject *subject = new Proxy("Obj");

  std::cout << "Get Name:\n";

  std::cout << subject->Name() << std::endl;

  subject->Request();

  subject->SetName("NewObj");

  std::cout << "Get Name: " << subject->Name() << std::endl;

  delete subject;

  return 0;
}
