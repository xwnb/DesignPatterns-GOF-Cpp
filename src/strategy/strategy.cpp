/**
 * 动机：
 * 假如客户类 Context 的方法 ContextInterface 中有一个算法需要变动，
 * 那么就需要该这个算法。 若这个算法在 Context 中实现，
 * 那么就需要修改这个现有的算法实现。
 *
 * 如果想保持现有算法不变， 而增加新的算法接口来替换。 那客户 Context
 * 将庞大并且难以维护。
 *
 * 客户类 Context 不同时候只需要不同的算法，
 * 那就得根据不同的条件调用不同的算法接口。 另外， 我们并不想支持 Context
 * 不使用的方法， 暴露过多的算法并不好。
 *
 *
 * 效果：
 * 实现算法系列： Strategy 系列类为 Context 定义了一系列可重用的算法或行为。
 *
 * 替代继承：虽然可以用继承 Context 类的方法来支持不同的算法， 但这样就导致了
 * Context 类和具体的算法实现耦合在一起了， 难以扩展或者维护，
 * 而且不能很好的更改算法。 如果是继承， 结果就是得到很多 Context 的子类，
 * 但它们实际的差别只是算法的实现不同而已。 如果把算法封装在 Strategy 类中，
 * 那算法就独立了， 切换和扩展就很容易。
 *
 * 消除条件语句： 如果算法实现在 Context 中，
 * 那切换算法就需要根据不同的条件来判断。 如果封装在独立的 Strategy 类中， 那
 * Context 调用算法的方法中， 就可以消除掉条件语句了。
 *
 * 实现的选择： 客户程序可以根据实际的需要来决定调用那种算法策略。
 *
 *
 * 缺点：
 * 既然给客户提供了不同的算法策略的选择， 那可能得向客户暴露具体的实现。
 *
 * Context 和 Strategy 通信开销：算法肯定是应用在 Context 上，
 * 所以，实际上会通过共享的接口传递信息。 如果存在一些共享的数据，
 * 那么这两个类耦合会更加紧密。 考虑到需要给不同的 Strategy 传递数据，
 * 但实际上简单的 Strategy 可能啥数据都用不到， 那 Context
 * 可能就会创建和初始化一些无用数据了。
 *
 * 增加对象的数目： 因为 Strategy 要维护被 Context 不同时刻和地点调用的状态，
 * 所以难免会增加一些对象。 但是可以让所有的状态由 Context 来维护， 调用
 * Strategy 时把被需要的状态数据传递过去， 让 Strategy 成为无状态对象。
 *
 */

#include <iostream>
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"
#include "Context.h"

int main(int argc, char const *argv[]) {
  Context *context_a = new Context(new ConcreteStrategyA());
  context_a->ContextInterface();
  delete context_a;

  Context *context_b = new Context(new ConcreteStrategyB());
  context_a->ContextInterface();
  delete context_b;

  Context *context_c = new Context(new ConcreteStrategyC());
  context_a->ContextInterface();
  delete context_c;
  return 0;
}
