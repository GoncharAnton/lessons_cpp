#include <iostream>
void ten_stars()
{
    int a = 10;
    std::cout << "ten stars \n";
    for (int b = 0; b < a; b++)
        std::cout << "* ";
    std::cout << std::endl<< std::endl;
}
void hundred_stars()
{
    int a = 10;
    std::cout << "one hundred \n";
    for (int b = 0; b < a; b++)
    {
        for(int c = 0; c < a; c++)
            std::cout << "* ";
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}
void thousand_star()
{
    int a = 1000;
    std::cout << "one thousand \n";
    for (int b = (a /100); b > 0; b--)
    {
        for(int b = 0; b < (a/100); b++)
        {
            for(int b = 0; b < (a/100);b++)
                std::cout << "* ";
            std::cout << b << std::endl;
        }
        std::cout << '#' << b << std::endl << std::endl;
    }
}
void user_stars()
{
    int a;
    std::cout << "user stars \n";
    do
    {

        std::cout << "stars value should by unsigned integer value from 0 to 1000 \n" << "enter star value :";
        std::cin >> a;
        if((a < 0)||(a > 1000))
            std::cout << "wrong value";
    }while((a < 0)||(a > 1000));
    for(int b = 1; b <= a; b++)
    {
        std::cout << "* ";
        if((b %10) == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}
void user_star_while()
{
    std::cout << "user star \n";
    int a, b = 1;
    do
    {
        std::cout << "User star value should by unsigned integer value from 1 to 1000 \n" << "enter star value: ";
        std::cin >> a;
        if((a < 1)||(a > 1000))
            std::cout << "wrong value! please try again \n";
    }while((a < 1)||(a > 1000));
    while(b != (a + 1))
    {
        std::cout << "* ";
        if((b %10) == 0)
            std::cout << std::endl;
        b++;
    }
    std::cout << std::endl << std::endl;
}
void user_value()
{
    int a;
    std::cout << "User value /n";
    do
    {
        std::cout << "user value should by unsigned integer value from 1 to 1000 \n" << "enter user value :";
        std::cin >> a;
        if((a < 1)||(a >1000))
            std::cout << "wrong value! Please try again \n";
    }while ((a < 1)||(a > 1000));
    for(int b = 1; b <= a; b++)
    {
        std::cout << b;
        if(b != a)
            std::cout << ", ";
        else
            std::cout << ';';
        if ((b % 10) == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}
void user_value_while()
{
    int a, b = 1;
    std::cout << "user value while \n";
    do
    {
        std::cout << "user value should by unsigned integer value from 1 to 1000 \n" << "enter user value :";
        std::cin >> a;
        if((a < 1)||(a >1000))
            std::cout << "wrong value! Please try again \n";
    }while ((a < 1)||(a > 1000));
    while (b != (a+1))
    {
        std::cout << b;
        if(b != a)
            std::cout << ", ";
        else
            std::cout << ';';
        if((b % 10) == 0)
            std::cout << std::endl;
        b++;
    }
    std::cout << std::endl << std::endl;
}
void revers_user_value()
{
    int a;
    std::cout << "revers_user_value \n";
    do
    {
        std::cout << "user value should by unsigned integer value from 1 to 1000 \n" << "enter user value : ";
        std::cin >> a;
        if((a < 1)||(a > 1000))
            std::cout << "wrong value! please try again.";
    }while((a < 1)||(a > 1000));
    for(int b = a; b > 0; b-- )
    {
        std::cout << b;
        if(b != 1)
            std::cout << ", ";
        else
        std::cout << "; ";
        if((b % 10)== 0)
            std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}
void even_user_value()
{
    int a;
    std::cout << "even user value \n";
    do
    {
        std::cout << "user value should by unsigned integer value for 1 to 1000 \n" << "enter user value :";
        std::cin >> a;
        if((a < 1)||(a >1000))
            std::cout << "wrong value! Please try again \n";
    }while ((a < 1)||(a >1000));
    for(int b = 1; b <= a; b++)
    {
        if((b % 2) == 0)
        {
            std::cout << b;
            if((b != a)&&(b != (a - 1)))
                std::cout << ", ";
            else if ((b == a)||b == (a - 1))
                std::cout << "; ";
        }
        if((b % 10) == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    ten_stars();
    hundred_stars();
    thousand_star();
    user_stars();
    user_star_while();
    user_value();
    user_value_while();
    revers_user_value();
    even_user_value();
    return 0;
}
