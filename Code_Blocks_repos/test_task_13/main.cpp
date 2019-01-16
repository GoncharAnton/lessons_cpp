/*вывести на экран квадратик из звездочек, размер квадрата задается юзером.*/
#include <iostream>
void star(int b)
{
  for(int a = 0; a < b; a++)
  {
    for(int a = 0; a < b; a++)
        std::cout << "* ";
    std::cout << std::endl;
  }
}
int main()
{
    int b;
    do
    {
        std::cout << "square size should by unsigned integer value \n";
        std::cout << "enter square size :";
        std::cin >> b;
        if(b < 1)
            std::cout << "wrong variable value! please try again \n";
    }while (b < 1);
    star(b);
    return 0;
}
