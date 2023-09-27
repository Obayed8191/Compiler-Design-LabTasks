#include <iostream>
using namespace std;

int main()
{
  string expression;
  cout << "Enter an expression: ";
  cin >> expression;
  for (int i = 0; i < expression.length(); i++)
{
    if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||expression[i] == '/' ||expression[i] == '=')
    {
      cout << expression[i] << " ";
    }
}

  return 0;
}
