#include <iostream>

int BrokenCalculator(int startNumber, int endNumber)
{
    int Result=0;

    while (startNumber<endNumber)
    {
        Result++;
        if (endNumber % 2==1)
        {
            endNumber++;
        }
        else
        {
            endNumber = endNumber / 2;
        }
        
    }
    return Result-endNumber+startNumber;
}

int main()
{
    int Number=0;
    
    int Result=0;
    
    std::cin >> Number >> Result;
    
    std::cout << "\n";
    
    std::cout << BrokenCalculator(Number, Result) << "\n";
   
    return 0;

}

