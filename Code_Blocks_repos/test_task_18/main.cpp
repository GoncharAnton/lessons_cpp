#include <iostream>
void elevator (int a);
void pass();
void test()
{
    int a;
    do
    {
        std::cout << "the floor value shod by unsigned integer value from 1 to 9! \n ";
        std::cout << "enter the floor value: ";
        std::cin >> a;
        if ((a < 1)||(a > 9))
            std::cout << "wrong floor value! please try again! \n";
    }while ((a < 1 )||(a > 9));
    elevator(a);
}
void elevator(int a)
{
    if(((a >= 1)&&(a <= 3))||((a >= 7)&&(a <= 9)))
        std::cout << "OK!";
    else
        pass();
}
void pass()
{
    int const PASS = 1337;
    int a;
    do
    {
        std::cout << "enter the password:";
        std::cin >> a;
        if(a != PASS)
        {
            if( a == 0)
            {
                 std::cout << "thanks for coming!";
                 break;
            }
            std::cout << "wrong password! please try again, or press '0' for cancel!\n";
        }


        else
            std::cout << "ok)";
    }while(a != PASS);
}
int main()
{
    test();
    return 0;
}
