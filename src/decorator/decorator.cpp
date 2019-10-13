/**
 * 动机：
 * 给某个对象添加一些功能， 而不是给整个对象的类添加功能。 比如， 一个文本框，
 * 可以根据需要给这个文本框增加滚动条， 增加边框等。 一种方式通过继承来实现，
 * 但是继承时静态的，意味着用户很难控制新增功能的方式和时机。
 *
 * 举个例子： 比如现在有一个 Person 对象， 这个 Person 会有很多属性，
 * 比如有戴眼镜、 戴帽子、 穿裙子的 Person。 也可能不同的 Person
 * 会有不同的行为， 比如擅长唱歌的、 睡觉的。 如果只通过一个 Person
 * 来表达，那这个 Person 类会有很多的属性和方法， 并且如何获取不同 Person
 * 实例对象的属性和方法很难区分。 如果通过继承去实现， 那会有很多的子类，
 * 并且不好控制添加属性和方法的时机。 因为这些属性和方法并不是固定的，
 * 比如有戴眼镜的 Person， 有戴帽子的 Person， 也有戴帽子、 穿裙子的 Person。
 * 这个时候实际产生的 Person 实例并不是有限的种类的， 很难归类。
 * 所以用继承会导致类爆炸。 这个时候装饰器模式就能很好适应。
 *
 *
 * 效果：
 * 比类静态继承更加灵活：
 * 利用装饰器可以灵活的给对象添加或删除职责（功能和方法）， 甚至可以重复添加。
 *
 * 避免高层次的类有太多的特征： 高层次的类 （ Component ）
 * 可以只具有最小的功能和方法， 其余的都通过装饰器来装饰， 需要什么才添加什么。
 * 而避免把所有的特征全放到高层次类中。 这样即保证了 Component
 * 实例对象不必为一些不需要的功能付出代价。 同时也不依赖 Decorator， 如果
 * Component 需要拓展新的特征， 那就可以只需要拓展新的 Decorator子类。 反过来，
 * 新增的 Decorator 子类也不会影响 Component 类。
 *
 * Decorator 和 Component 并不一样： （没理解）
 *
 * 会产生很多小对象： 每一次装饰后都是一个新的对象， 区别也只是连接方式上不同，
 * 并不是类或者属性值不同（数据成员和方法成员？）
 *
 */

#include <iostream>

#include "Component.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include "Decorator.h"

int main(int argc, char const *argv[]) {
  Component *comp1 = new ConcreteComponent("Hello, World.");
  Component *comp2 = new ConcreteDecoratorA(comp1, '*');
  comp2->Operation();
  delete comp2;

  Component *comp3 = new ConcreteComponent("Design Pattern.");
  Component *comp4 = new ConcreteDecoratorA(comp3, '-');
  Component *comp5 = new ConcreteDecoratorB(comp4, '+');
  Component *comp6 = new ConcreteDecoratorA(comp5, '#');
  comp6->Operation();
  delete comp6;

  return 0;
}
