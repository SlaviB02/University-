#include <iostream>

int main()
{
    int a = 0, b = 0;
    int max = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> max;
    if (a < 1 || a>1000 || b < 1 || b>1000 || max < 1 || max>1000000)
    {
        std::cout << "-1";
    }
    else
    {
        int counter = 0;
        bool flag = true;
        char A = 35, B = 64;
        for (int x = 1; x <= a; x++)
        {
            for (int y = 1; y <= b; y++)
            {

                counter++;
                if (counter > max)
                {
                    flag = false; break;
                }

                std::cout << A << B << x << y << B << A << "|";

                if (x == a && y == b)
                {
                    flag = false; break;
                }

                A++;
                if (A > 55)
                {
                    A = 35;
                }
                B++;
                if (B > 94)
                {
                    B = 64;
                }
            }
            if (flag == false)
            {
                break;
            }
        }


    }
    return 0;

}