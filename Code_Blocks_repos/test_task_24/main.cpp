#include <iostream>
#include <vector>
int check_card();
int check_sum();
void card()
{
    std::vector <int> card(10, 0);
    int a, b, sum;
    do
    {
        a = check_card();
        b = check_sum();
        card[a] += b;
        sum = 0;
        for(int c = 0; c < 10; c++)
        {
            sum += card[c];
            std::cout << card[c] << "; ";
        }
        std::cout << std::endl << "total card sum is : " << sum << std::endl;
    }while(true);
}
int check_card()
{
    int a;
    do
    {
        std::cout << "card value should by unsigned integer value from 0 to 9! \n" << "enter card value: ";
        std::cin >> a;
        if((a < 0)||(a > 9))
            std::cout << "wrong value! Please try again! \n";
    }while ((a < 0)||(a > 9));
    return a;
}
int check_sum()
{
    int a;
    do
    {
        std::cout << "sum value should by integer value from -1000 to 1000 ! \n" << "enter sum value : ";
        std::cin >> a;
        if((a < -1000)||(a > 1000))
            std::cout << "wrong value! Please try again!";
    }while((a < -1000)||(a > 1000));
    return a;
}
int main()
{
    card();
    return 0;
}
