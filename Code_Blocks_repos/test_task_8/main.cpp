#include <iostream>
void elevator (int a)
{
    int const A = 1337;
    int b;
    if(((a >= 1)&&(a <= 3))||((a >= 7)&&(a <= 9)))
        std::cout << "OK";
    else
    {
        do
        {
            std::cout << "enter password please: ";
            std::cin >> b;
            if(b != A)
                std::cout << "wrong password! please try again! \n";
            else
                std::cout << "OK";
        }while (b != A);
    }
}
int main()
{
    int a;
    do
    {
        std::cout << "the floor number should by unsigned integer value from 1 to 9 \n";
        std::cout << "enter the floor number : ";
        std::cin >> a;
        if((a < 0)||(a > 9))
                std::cout << "wrong value! \n" << "please try again! \n";
    }while((a < 0)||(a > 9));
    elevator(a);
    return 0;
}
