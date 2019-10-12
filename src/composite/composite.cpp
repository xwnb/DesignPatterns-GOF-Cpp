
/**
 * 动机：
 * 构建这样一个容器类， 这个容器里面可以有一系列的元素类，
 * 也可以有包含元素类的容器类。
 * 因为对于用户来说这些元素类和容器类可以视为同一事物。
 *
 * 典型的结构比如：
 * “文件夹”。 一个“文件夹”里面可以有文件夹， 也可以有文本、 图片、 视频等。
 * 对于用户来说， 它们都是 “文件”。 每个 “文件” 都具有相同的操作， 比如复制、
 * 删除等操作（方法）， 同时他们也都是有名称、日期等属性（成员变量）的。
 * 如果要执行查找操作， 那应该可以用一个方法迭代所有 “文件” 的名称，
 * 而不需要针对文本、 图片、 文件夹等不同类别的 “文件” 来区分查找文件名称操作。
 *
 * 效果：
 * 定义了包含的基本元素对象和元素容器对象的类层次结构：
 * 基本元素可以组合成元素容器，
 * 元素容器和基本元素又可以继续迭代组合成新的元素容器。
 *
 * 简化了客户代码： 对于用户来说， 不关心处理的是元素还是元素容器，
 * 这样就没必要在实现方法中对元素还是容器进行区分或选择操作。
 *
 * 可以更加容易增加新的类型组合： 元素类和容器类可以继续组合新的容器类。
 *
 * 缺点： 因为一个容器组件中组合的元素对象和容器对象在设计时是一般化处理的。
 * 若需要对组件中的某些元素对象特殊处理， 那就很难办， 得必须在运行时时刻检查。
 *
 */

#include "Composite.h"
#include <iostream>
#include "Component.h"
#include "Leaf.h"

int main(int argc, char const *argv[]) {
  Leaf *leaf_1 = new Leaf("Leaf_1");
  Leaf *leaf_2 = new Leaf("Leaf_2");
  Leaf *leaf_3 = new Leaf("Leaf_3");
  Composite *sub_node_1 = new Composite("SubNode_1");
  sub_node_1->Add(leaf_1);
  sub_node_1->Add(leaf_2);
  sub_node_1->Add(leaf_3);

  Leaf *leaf_4 = new Leaf("Leaf_4");
  Composite *sub_node_2 = new Composite("SubNode_2");
  sub_node_2->Add(leaf_4);

  Leaf *leaf_5 = new Leaf("Leaf_5");
  Leaf *leaf_6 = new Leaf("Leaf_6");
  Composite *sub_node_3 = new Composite("SubNode_3");
  sub_node_3->Add(leaf_5);
  sub_node_3->Add(leaf_6);
  sub_node_3->Add(sub_node_2);

  Leaf *leaf_7 = new Leaf("Leaf_7");
  Leaf *leaf_8 = new Leaf("Leaf_8");
  Composite *root = new Composite("Root");
  root->Add(leaf_7);
  root->Add(leaf_8);
  root->Add(sub_node_1);
  root->Add(sub_node_3);

  root->Operation();
  delete root;

  return 0;
}
