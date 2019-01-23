#include <iostream>
biggest_value()
{
    int a, b = 0;
    do
    {
        do
        {
            std::cout << "variable value should by integer value from -1000 to 1000 \n" << "press '0' for exit! \n";
            std::cout << "biggest value is : " << b << std::endl;
            std::cout << "enter variable value: ";
            std::cin >> a;
            if((a < -1000)||(a > 1000))
                std::cout << "wrong value! Please try again! \n";
        }while((a < -1000)||(a > 1000));
        if((a > b)&&(a != 0))
            b = a;
        else if(a == 0)
            std::cout <<"biggest value is : "<< b << std::endl << "good bay! \n";
    }while (a != 0);
}
void biggest_even_value()
{
    int a, b = 0;
    do
    {
        do
        {
            std::cout << "variable value should by integer, even value from -1000 to 1000 \n" << "press '0' for exit! \n";
            std::cout << "biggest value is : "<< b << std::endl;
            std::cout << "enter variable value: ";
            std::cin >> a;
            if (((a % 2)!=0)||((a < -1000)||(a > 1000)))
                std::cout << "wrong value! please try again! \n";
        }while((a < -1000)||(a > 1000));
        if(((a % 2) == 0)&&(a > b)&&(a != 0))
            b = a;
        else if(a == 0)
            std::cout << "biggest value is: " << b << std::endl << "good bay! \n";
    }while(a != 0);
}
int main()
{
  biggest_value();
  biggest_even_value();
  return 0;
}
