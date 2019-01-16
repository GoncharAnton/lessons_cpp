#include <iostream>
void star(int b)
{
  int a = 0, c = 0;
  while (c < b)
  {
      while (a < b)
      {
          std::cout << "* ";
          a++;
      }
      std::cout << std::endl;
      c++;
      a = 0;
  }
}
/*void star(int b)
{
  for(int a = 0; a < b; a++)
  {
    for(int a = 0; a < b; a++)
        std::cout << "* ";
    std::cout << std::endl;
  }
}*/
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
