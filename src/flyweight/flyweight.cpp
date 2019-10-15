/**
 *
 */

#include <vector>
#include "FlyweightFactory.h"

int main(int argc, char const *argv[]) {
  FlyweightFactory *factory = new FlyweightFactory();

  std::vector<Flyweight *> flyweights;
  flyweights.push_back(factory->GetFlyweight(1));
  flyweights.push_back(factory->GetFlyweight(2));
  flyweights.push_back(factory->GetFlyweight(3));

  flyweights.push_back(factory->GetFlyweight(1));
  flyweights.push_back(factory->GetFlyweight(2));
  flyweights.push_back(factory->GetFlyweight(3));

  flyweights.push_back(factory->GetFlyweight('a'));
  flyweights.push_back(factory->GetFlyweight('b'));
  flyweights.push_back(factory->GetFlyweight('c'));
  flyweights.push_back(factory->GetFlyweight('a'));
  flyweights.push_back(factory->GetFlyweight('b'));
  flyweights.push_back(factory->GetFlyweight('c'));

  // for (auto &flyweight : flyweights) {
  //   if (flyweight) {
  //     std::cout << "delete.\n";
  //     delete flyweight;
  //     flyweight = nullptr;
  //   }
  // }
  delete factory;
  return 0;
}
