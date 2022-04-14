const int size = 255;

#include <iostream>

bool stringCompare(char str1[], char str2[]) {

    int i = 0;
    bool flag = true;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i]) {
            flag = false;
            break;
        }
        i++;
    }
    if (flag == true && str1[i] == '\0' && str2[i] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char str[size];

    std::cin.getline(str, size);

    char s[size] = "";

    char S[size] = "";

    int i = 0;

    int count1 = 0, count2 = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s[count1++] = str[i];
        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            S[count2++] = str[i];
        }

        i++;
    }
    for (int i = 0; i < count2; i++)
    {
        char ch = S[i];
        S[i] = ch + ('a' - 'A');
    }

    if (stringCompare(s, S) ==true)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}
