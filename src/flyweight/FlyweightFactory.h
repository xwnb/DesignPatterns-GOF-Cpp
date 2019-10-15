/**
 *
 */

#ifndef FLYWEIGHT_FACTORY_H_
#define FLYWEIGHT_FACTORY_H_

#include <unordered_map>
#include <unordered_set>

#include "ConcreteFlyweight.h"
#include "Flyweight.h"
#include "UnsharedConcreteFlyweight.h"

class FlyweightFactory {
 private:
  /* data */
  std::unordered_map<char, Flyweight *> flyweights_;
  std::unordered_set<Flyweight *> unshared_flyweights_;

 public:
  FlyweightFactory(/* args */) {
    std::cout << "FlyweightFactory is Constructed.\n";
  }
  virtual ~FlyweightFactory() {
    std::cout << "FlyweightFactory: Delete ConcreteFlyweights.\n";
    for (auto f : flyweights_) {
      delete f.second;
      f.second = nullptr;
    }
    std::cout << "FlyweightFactory: Delete UnsharedConcreteFlyweights.\n";
    for (auto f : unshared_flyweights_) {
      delete f;
      f = nullptr;
    }
    std::cout << "FlyweightFactory is Deconstructed.\n";
  }

  Flyweight *GetFlyweight(int num) {
    std::cout << "FlyweightFactory: Get a New UnsharedConcreteFlyweight.\n";
    Flyweight *new_flyweight = new UnsharedConcreteFlyweight(num);
    // flyweights_.insert({ch, new_flyweight});
    unshared_flyweights_.insert(new_flyweight);
    return new_flyweight;
  }

  Flyweight *GetFlyweight(char ch) {
    if (flyweights_.find(ch) == flyweights_.end()) {
      std::cout << "FlyweightFactory: Get a New ConcreteFlyweight.\n";
      Flyweight *new_flyweight = new ConcreteFlyweight(ch);
      // flyweights_.insert({ch, new_flyweight});
      flyweights_.insert(std::pair<char, Flyweight *>(ch, new_flyweight));
      return new_flyweight;
    } else {
      std::cout << "FlyweightFactory: a ConcreteFlyweight already exists.\n";
      return flyweights_.at(ch);
    }
  }
};

#endif  // !FLYWEIGHT_FACTORY_H_