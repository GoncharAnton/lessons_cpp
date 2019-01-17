#include <iostream>
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b;
  std::cout << "enter two integer value: \n" << "first :";
  std::cin >> a;
  std::cout << "second :";
  std::cin >> b;
  std::cout << "sum of first & second value is : "<< sum(a, b);
  return 0;
}
