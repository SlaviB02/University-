using System.Collections.Generic;

int replace(int n)
{
    if (n==0)
        return 0;
    int ch = n % 10;
    if(ch==9)
    {
        ch = 0;
    }
    return replace(n/10)*10+ch;
}
void reverse(int[]arr)
{
    int n = arr.Length - 1;
    int i = 0;
    while (i < n)
    {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        i++;
        n--;
    }
}
void InsertionSortIncreasing(int[] arr)
{
    for (int i = 0; i < arr.Length - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
           
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
void InsertionSortDecreasing(int[] arr)
{
    for (int i = 0; i < arr.Length - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {

            if (arr[j - 1] <arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
void SortMatrix(int [,]matrix)
{
    for (int i = 0; i < matrix.GetLength(0); i++)
    {
        for (int j = 0; j < matrix.GetLength(1); j++)
        {
            Console.Write(matrix[i, j] + " ");
        }
        Console.WriteLine();
    }
    Console.WriteLine();
    for (int i = 0; i < matrix.GetLength(0); i++)
    {
        int[] row = new int[matrix.GetLength(1)];
        for (int j = 0; j < matrix.GetLength(1); j++)
        {
            row[j] = matrix[i, j];
        }
        if (i % 2 == 0)
        {
            InsertionSortIncreasing(row);
        }
        else
        {
            InsertionSortDecreasing(row);
        }
        for (int j = 0; j < matrix.GetLength(1); j++)
        {
            matrix[i, j] = row[j];
        }
    }
    for (int i = 0; i < matrix.GetLength(0); i++)
    {
        for (int j = 0; j < matrix.GetLength(1); j++)
        {
            Console.Write(matrix[i, j] + " ");
        }
        Console.WriteLine();
    }
}
    Console.WriteLine("1 задача\n");
int n = 299897;
Console.WriteLine(n+"\n");
int result=replace(n);
Console.WriteLine(result+"\n");
Console.WriteLine("2 задача\n");
int[]arr=new int[] {5,2,14,7,3,10};
Console.WriteLine(String.Join(", ", arr));
reverse(arr);
Console.WriteLine();
Console.WriteLine(String.Join(", ", arr));
Console.WriteLine();
Console.WriteLine("3 задача\n");
int[,] matrix=new int[,]
{
{ 6, 2, 8, 4},
{ 6, 9, 3,7},
{2, 4, 3, 1},
{1, 8, 4, 9},
{ 4,5,0,8}
};
SortMatrix(matrix);

