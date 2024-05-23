
int[]a= new int[] {0,5,6,8};
int[] b = new int[] { 1, 2, 3, 4,10 };
Console.WriteLine(String.Join(",", a));
Console.WriteLine(String.Join(",", b));
int[]c=new int[a.Length+b.Length];
int i=0, j=0,k=0;
while(i<a.Length && j<b.Length)
{
    if (a[i] <= b[j])
    {
        c[k] = a[i];
        i++;
    }
    else
    {
        c[k] = b[j];
        j++;
    }
    k++;
   
}

while (i < a.Length)
{
    c[k] = a[i];
    i++;
    k++;
}

while (j < b.Length)
{
    c[k] = b[j];
    j++;
    k++;
}
Console.WriteLine("Слети");
Console.WriteLine(String.Join(",", c));