#include <iostream>
void triangle (int a)
{
    for(int b = 1; b <= a; b++)
    {
        for(int c = b; c > 0; c--)
            std::cout << "*";
        std::cout << std::endl;
    }
}
/*
void triangle (int a)
{
    for(int b = 0; b < a; b++)
    {
        for(int c = (a - b); c > 0; c--)
            std::cout << "*";
        std::cout << std::endl;
        }
}*/
/*
void triangle (int a )
{
    for(int b = 0; b < a; b++)
    {
        for(int c =((a - 1) - b); c < a; c++)
            std::cout << " ";
            for(int d = b; d < a; d++)
            std::cout << '*';
        std::cout << std::endl;
    }
}*/
int main()
{
    int a;
    std::cout << "triangle size should by unsigned, integer value!";
    std::cout << "enter triangle size : ";
    std::cin >> a;
    triangle (a);
    return 0;
}
