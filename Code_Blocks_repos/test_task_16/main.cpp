#include <iostream>
void sum(int a);
void test_sum()
{
    int a;
    do
    {
        std::cout << "the variable value should by integer, unsigned value from 1 to 100! \n" << "enter sum value of variable: ";
        std::cin >> a;
        if ((a < 1)||(a > 100))
            std::cout << "wrong value! please try again!";
    }while((a < 1)||(a > 100));
    sum(a);
}
void sum(int a)
{
    int sum = 0;
    for(int b = 1; b <= a; b++)
    {
        sum += b;
    }
    std::cout << sum << std::endl;
}
void user_sum()
{
    int a, sum = 0;
    do
    {
        do
        {
            std::cout << "the variable value should by integer value from -1000 to 1000 \n";
        std::cout << "press '0' for exit! \n" << "enter the variable value:";
        std::cin >> a;
        if ((a < -1000)||(a > 1000))
            std::cout << "wrong value! please try again /n";
        }while ((a < -1000)||(a > 1000));
        if(a != 0)
        {
            sum += a;
            std::cout << sum << std::endl;
        }
        else
            std::cout << sum << std::endl << "good bay!";
    }while(a != 0);
}
int main()
{
    test_sum();
    user_sum();
    return 0;
}
