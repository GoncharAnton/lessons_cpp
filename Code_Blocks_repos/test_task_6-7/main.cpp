/*�������� ������� �� ������� �������� � ������� ������ � ����,
���� �� 3 ������������, �� �������� ��� "����",
���� �� 4� � ���� - "���������"!
���� ��� ��������� ������������ ���� ����� �����
���������� ������ 6, �� ���� �� 20� � ����, �������� "���������!!".
� ������ ����� �������� ���� ���� ������� �� 3�, ������ ��
�������� ������ ��� �������� ����� ���.
������������ &&
������������ else
�� ������������ �� && �� else */

#include <iostream>
// check for correct data
int check()
{
    int a;
    do
    {
      std::cin >> a;
      if(a < 0)
        std::cout << "wrong value, please try again! \n" << "(value should by unsigned, integer value\n";
    }while(a < 0);
    return a;
}
//first variant
void body(int a)
{
    if(a <= 3)
        std::cout << "bad result( \n";
    if((a > 3)&&(a < 20))
        std::cout << "cool result!) \n";
    if (a >= 20)
        std::cout << "runners )) \n";
}
/*
//second variant
void body (int a)
{
    if(a >= 20)
        std::cout << "runner )) \n";
    else if (a >= 4)
        std::cout << "cool result ) \n";
    else
        std::cout << "bad result \n";
}
*/
/*
// third result
void body(int a)
{
  if(a < 4)
  {
      if(a >= 0)
        std::cout << "bad result ( \n";
  }
  if(a < 20)
  {
      if(a >= 4)
        std::cout << "cool result \n";
  }
  if(a > 19)
        std::cout << "Runner )) \n";
}
*/
int main()
{
    int a;
    std::cout << "haw many kilometers do you travel per day? \n";
    a = check();
    body(a);
    return 0;
}
