/*�������� ���������, ������� ��������� ����.
���������� ����� �����, � ���� ������ 1 ��� ������ 9,
�� ������� "�������� ����". ���� 1-3 ��� 7-9 �� ����� "��",
���� �� �� 4 �� 6, �� ������ ������ ������ (��������).
���� ������ �� ����� 1337, �� ��������� �������
"�������� ������", � ����� "��".*/
#include <iostream>

void elevator()
{
    int a, z;
    int const PASS = 1337;
    do
    {
        std::cout << "enter the number of the floor : \n ";
        std::cin >> a;
        if ((a < 1)||(a > 9))
            std::cout << "wrong floor, please try again! \n";
    }while ((a < 1)||(a > 9));
    if (((a >= 1)&&(a <= 3))||((a >= 7)&&(a <=9)))
        std::cout << "ok";
    else if((a >= 4)||(a <= 6))
    {
        do
        {
            std::cout << "enter password : \n";
            std::cin >> z;
            if(z == PASS)
                std::cout << "ok";
            else
                std::cout << "wrong password. Please try again! \n";
        }while(z != PASS);
    }
}
int main()
{
  elevator();
  return 0;
}
