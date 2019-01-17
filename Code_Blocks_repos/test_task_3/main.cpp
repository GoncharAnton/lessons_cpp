#include <iostream>

int Plus(int a)
{
    a++;
    return a;
}
int main()
{
    int a;
    std::cout << "enter unsigned integer value :";
    std::cin >> a;
    do
    {
        if(a < 0)
            std::cout << "wrong value! Please try again!";
    }while (a < 0);
    std::cout << "uoyr velu +1 is: " << Plus(a);
    return 0;
}
