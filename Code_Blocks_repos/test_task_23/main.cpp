#include <iostream>
#include <vector>

int test();
int user_number();
void house_number()
{
    std::vector <int> house (10, 0);
    int b, c;
    for(int a = 0 ; a < 10; a ++)
    {
        b = test();
        house[a] = b;
    }
     c = user_number();
    for(int a = 0; a < 10; a++)
    {
        if(c == house[a])
        {
            std::cout << "i know this house!";
            break;
        }
    }
}
int test()
{
    int b;
    do
    {
        std::cout << "house number should by unsigned integer value!" << "enter house number: ";
        std::cin >> b;
        if(b < 1)
            std::cout << "wrong value! please try again!";
    }while(b < 1);
        return b;
}
int user_number()
{
    int b;
    do
    {
        std::cout << "user number should by unsigned integer value! \n" << "enter user number: ";
        std::cin >> b;
        if (b < 1)
            std::cout << "wrong value! please try again!";
    }while(b < 1);
    return b;
}
int main()
{
    house_number();
    return 0;
}
