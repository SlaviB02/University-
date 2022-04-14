#include <iostream>
#include<stdlib.h>

bool isPalindrome(int num)
{

    int temp = num;
    int sum = 0;
    int digit;
    while (num > 0)
    {
        digit = num % 10;
        sum = (sum * 10) + digit;
        num = num / 10;
    }
    if (temp == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int closestPalindrome(int num)
{
    if (num > 100)
    {
        int smallNum = num - 1;

        while (!isPalindrome(abs(smallNum)))
        {
            smallNum--;
        }

        int largeNum = num + 1;

        while (!isPalindrome(abs(largeNum)))
        {
            largeNum++;
        }

        if (abs(num - smallNum) == abs(num - largeNum))
        {
            return largeNum;
        }
        if (abs(num - smallNum) > abs(num - largeNum))
        {
            return largeNum;
        }
        else
        {
            return smallNum;
        }
    }
    else
    {
        return 101;
    }
}

int main()
{

    int number = 0;

    std::cin >> number;

    if (number < 0)
    {
        std::cout << -1;
    }
    else
    {
        if (isPalindrome(number))
        {
            std::cout << number;
        }
        else
        {
            std::cout << closestPalindrome(number);
        }

    }
    return 0;
}

