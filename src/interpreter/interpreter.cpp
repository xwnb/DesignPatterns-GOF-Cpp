/**
 *
 */

#include "Context.h"
#include "NonterminalExpression.h"
#include "TerminalExpression.h"

int main(int argc, char const *argv[]) {
  // (true and x) or (y and (not x))

  VariableExpression *x = new VariableExpression('x');
  VariableExpression *y = new VariableExpression('y');

  AbstractExpression *expression =
      new OrExpression(new AndExpression(new ConstantExpression(true), x),
                       new AndExpression(y, new NotExpression(x)));

  Context context;
  context.Assign('x', false);
  context.Assign('y', true);

  bool result = expression->Interpret(&context);
  std::cout << "The Interpret Result is " << (result ? "TRUE" : "FALSE")
            << std::endl;

  delete expression;

  return 0;
}
