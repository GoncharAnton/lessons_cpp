/*����������� � ���������� ����������, ������ ��� ������� � ���������� ��������� (==).
������: ���� ���� �����, ���� �������� ��� ������ �� ���, � ����� ������ ����������
����� � ����� ������ 20 ��.
first variant - ������������ ++, �� ������������ +=
second variant - ������������ +=, �� ������������ ++
third variant - �� ������������ �� +=, �� ++
*/

#include <iostream>
#include <vector>
//third variant
void body()
{
  int a = 0, b, c = 0;
  std::vector <int> bag(5);
  while(a < 5)
  {
      std::cout << "enter th weight of a bag # " << a + 1 << ": \n";
      std::cin >> b;
      bag[a] = b;
      a = a + 1;
  }
      a = 0;
  while(a < 5)
  {
       if(bag[a] > 20)
        {
            std::cout << "the bag #" << a + 1 << " have "<< bag[a] << "(weight more 20 kilogram) \n";
            c = c + 1;
        }
        a = a + 1;
    }
    std::cout << "total begs : " << c;
}
/*
//second variant
void body()
{
  int a = 0, b, c = 0;
  std::vector <int> bag(5);
  while(a < 5)
  {
      std::cout << "enter th weight of a bag # " << a + 1 << ": \n";
      std::cin >> b;
      bag[a] = b;
      a += 1;
  }
  a = 0;
  while(a < 5)
  {
       if(bag[a] > 20)
        {
            std::cout << "the bag #" << a + 1 << " have "<< bag[a] << "(weight more 20 kilogram) \n";
            c += 1;
        }
        a += 1;
    }
    std::cout << "total begs : " << c;
}
*/
/*
//first variant
void body()
{
    std::vector <int> bag(5);
    int a = 0, b, c = 0;
    do
    {
      std::cout << "enter th weight of a bag # " << a + 1 << ": \n";
      std::cin >> b;
      bag[a] = b;
      a++;
    }while(a < 5);
    for(int a = 0; a < 5; a++)
    {
        if(bag[a] > 20)
        {
            std::cout << "the bag #" << a + 1 << " have "<< bag[a] << "(weight more 20 kilogram) \n";
            c++;
        }
    }
    std::cout << "total begs : " << c;
}
*/
/*
int body()
{
    std::vector <int> bags(5, 0);
    for(int a = 0; a < 5; a++)
    {
        std::cout << "enter th weight of a bag # " << a + 1 << ": \n";
        do
        {
            std::cin >> bags[a];
            if(bags[a] < 0)
                std::cout << "wrong value of variable";
        }while(bags[a] < 0);
    }
    for(int a = 0; a < 5; a++)
    {
        if(bags[a] > 20)
            std::cout << "the bag #" << a + 1 << " have "<< bags[a] << "(weight more 20 kilogram) \n";
    }
}
*/
int main()
{
    body();
    return 0;
}
