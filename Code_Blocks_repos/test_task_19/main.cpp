#include <iostream>
void sum(int a);
void test_value()
{
    int a;
    do
    {
        std::cout << "the variable value should by integer unsigned value from 100 to 999!Press '0' to cancel \n " <<  "enter the variable value: ";
        std::cin >> a;
        if(a == 0)
        {
            std::cout << "good bay!";
            break;
        }
        if((a < 100)||(a > 999))
            std::cout << "wrong value! please try again\n";
        else
            sum(a);
    }while(true);
}
void sum(int a)
{
    int b;
    b = ((a / 100)+((a % 100) / 10)+(a % 10));
    std::cout << "sum is: "<< b << std::endl;
}
int main()
{
    test_value();
    return 0;
}
