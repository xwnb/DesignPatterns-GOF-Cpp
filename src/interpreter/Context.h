/**
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <iostream>
#include <string>
#include <unordered_map>

class Context {
 private:
  /* data */
  std::unordered_map<char, bool> bool_map_;

 public:
  Context() {
    std::cout << "Context: Constructed.\n";
  }
  virtual ~Context() {
    std::cout << "Context: Deconstructed.\n";
  }

  virtual void Assign(char ch, bool b) {
    // std::pair<char, bool> pair(ch, b);
    // bool_map_.insert(pair);

    bool_map_.insert({ch, b});

    // bool_map_.insert(std::make_pair(ch, b));
  }

  virtual bool Lookup(char ch) {
    return bool_map_.at(ch);
  }
};

#endif  // !CONTEXT_H_
