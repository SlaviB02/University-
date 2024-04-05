int NOD(int a, int b)
{

    if(a != b)
    {
        if (a > b)
        {
            return NOD(a - b, b);
        }
        else
        {
            return NOD(a, b - a);
        }
    }
    return a;
}
int NumbersSum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+NumbersSum(n-1);
}
void Row(int n)
{
  if(n<0)
    {
        return;
    }
    Row(n - 1);
    Console.Write(n + " ");
}
void ReverseRow(int n)
{
    Console.Write(n + " ");
    if(n==0)
    {
        return;
    }
    ReverseRow(n - 1);
}

    Console.WriteLine("НОД рекусия: ");
    Console.WriteLine(NOD(15, 45));
    Console.WriteLine(NOD(40, 4));
    Console.WriteLine("Сума n числа:");
    Console.WriteLine(NumbersSum(10));
    Console.WriteLine("Редица 0-n");
    Row(15);
    Console.WriteLine();
    Console.WriteLine("Редица n-0");
    ReverseRow(15);




