/**
 *
 */

#ifndef CONCRETE_MEDIATOR_H_
#define CONCRETE_MEDIATOR_H_

#include "ConcreteColleague.h"
#include "Mediator.h"

class ConcreteMediator : public Mediator {
 private:
  /* data */
  ConcreteColleagueA *colleague_a_;
  ConcreteColleagueB *colleague_b1_;
  ConcreteColleagueB *colleague_b2_;
  ConcreteColleagueC *colleague_c_;

 public:
  ConcreteMediator(/* args */) {
    std::cout << "ConcreteMediator is constructed.\n";
  }
  virtual ~ConcreteMediator() {
    delete colleague_a_;
    delete colleague_b1_;
    delete colleague_b2_;
    delete colleague_c_;
    std::cout << "ConcreteMediator is deconstructed.\n";
  }

  virtual void CreateColleagues() {
    colleague_a_ = new ConcreteColleagueA("Button", this);
    colleague_b1_ = new ConcreteColleagueB("Text", this);
    colleague_b2_ = new ConcreteColleagueB("RichText", this);
    colleague_c_ = new ConcreteColleagueC("CheckBox", this);

    // 这里模拟各个控件的动作

    std::cout << "----------------------------\n";
    colleague_a_->Event("clicked");
    std::cout << "----------------------------\n";
    colleague_b1_->Event("copy");
    std::cout << "----------------------------\n";
    colleague_b2_->Event("paste");
    std::cout << "----------------------------\n";
    colleague_c_->Event("checked");
    std::cout << "----------------------------\n";
  }

  // 中介者转发事件
  // 规则: A->B, B->C, C->A, C->B
  virtual void EmitEvent(std::string &receiver, std::string &event) {
    if (receiver == colleague_a_->Name()) {
      std::cout << "ConcreteMediator: Transfer Event: " << event
                << " to Colleague B.\n";
      colleague_b1_->ReceiveEvent(colleague_a_->Name(), event);
      colleague_b2_->ReceiveEvent(colleague_a_->Name(), event);
    } else if (receiver == colleague_b1_->Name()) {
      std::cout << "ConcreteMediator: Transfer Event: " << event
                << " to Colleague C.\n";
      colleague_c_->ReceiveEvent(colleague_b1_->Name(), event);
    } else if (receiver == colleague_b2_->Name()) {
      std::cout << "ConcreteMediator: Transfer Event: " << event
                << " to Colleague C.\n";
      colleague_c_->ReceiveEvent(colleague_b2_->Name(), event);
    } else if (receiver == colleague_c_->Name()) {
      std::cout << "ConcreteMediator: Transfer Event: " << event
                << " to Colleague A/B.\n";
      colleague_a_->ReceiveEvent(colleague_c_->Name(), event);
      colleague_b1_->ReceiveEvent(colleague_c_->Name(), event);
      colleague_b2_->ReceiveEvent(colleague_c_->Name(), event);
    }
  }
};

#endif  // !CONCRETE_MEDIATOR_H_