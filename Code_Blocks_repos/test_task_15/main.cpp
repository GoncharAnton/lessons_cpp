#include <iostream>
int check()
{
    int a;
    do
    {
        std::cout << "user value should by unsigned, integer, odd value \n"<< "enter using value:";
        std::cin >> a;
        if ((a % 2) == 0)
            std::cout << "wrong value! Please try again!";
    }while((a % 2) == 0);
    return a;
}
void chrismas_tree(int a)
{
    for(int b = 0; b <= ((a - 1)/2); b ++)
    {
        for(int c = 0; c < ((a - 1)/ 2)- b; c++)
            std::cout << " ";
        for(int d = (a - (2 * b));d <= a; d++)
            std::cout << "*";
        std::cout << std::endl;
    }
    for(int b = 0; b <= 1; b++)
    {
        for(int c = ((a -3)/ 2); c > 0; c--)
            std::cout << " ";
        for(int c = 1; c <= 3 ; c++)
            std::cout << "*";
        std::cout << std::endl;
    }

}
int main()
{
    int a = check();
    chrismas_tree(a);
    std::cout << a;
}
