void Row(int n,int current)
{
   
    if (current<n) 
    {
        Console.Write(current + " ");
        Row(n, current + 1);
    }
    else
    {
        if (n == 0) return;
        Console.Write(n + " ");
        Row(n - 1, current);
    }
   
  

}
void ReverseRow(int n)
{
    Console.Write(n + " ");
    if (n == 1)
    {
        return;
    }
    ReverseRow(n - 1);
    Console.Write(n + " ");
}

void printStar(int n,string s)
{
    s += '*';
    Console.WriteLine(s);
    if (n==1) return;
    printStar(n-1,s);
}
Console.WriteLine("Звезди");
printStar(7, "");

Console.WriteLine("n n-1 n-2 ... 3 2 1 2 3 ... n-2 n-1 n");
ReverseRow(20);
Console.WriteLine();

Console.WriteLine("1 2 3 ... n-2 n-1 n n-1 n-2 ... 3 2 1");
Row (20,1);