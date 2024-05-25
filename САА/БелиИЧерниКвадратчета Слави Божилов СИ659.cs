int[][] matrix = [
    [1, 0, 0, 0, 0, 1],
    [1, 1, 1, 0, 0, 0],
    [1, 0, 0, 0, 0, 0],
    [0, 0, 1, 1, 1, 1],
    [0, 0, 0, 1, 1, 1],
    [0, 1, 1, 1, 0, 0]
];
int Broi(int i, int j, int color)
{
    if (i < 0 || j < 0 || i >= 6 || j >= 6)
    {
        return 0;
    }
    else if (matrix[i][j] != color)
    {
        return 0;
    }

    matrix[i][j] = -1;
    int count = 1;

    count += Broi(i + 1, j, color);
    count += Broi(i, j + 1, color);
    count += Broi(i - 1, j, color);
    count += Broi(i, j - 1, color);


    return count;

}

Dictionary<int,int>blackZones=new Dictionary<int,int>();
Dictionary<int,int>whiteZones=new Dictionary<int,int>();
int color = matrix[0][0];
int res = Broi(0, 0, matrix[0][0]);
Console.WriteLine("Област на квадратче [0][0] Брой -> "+res);
int indexW = 1;
int indexB = 1;
if(color==1)
{
    blackZones.Add(indexB, res);
    indexB++;
}
else
{
    whiteZones.Add(indexW, res);
    indexW++;
}

for(int i=0; i<matrix.Length; i++)
{
    for(int j=0; j < matrix[i].Length; j++)
    {
        if (matrix[i][j] != -1)
        {
            int colorT = matrix[i][j];
            int temp = Broi(i,j, matrix[i][j]);
           if(colorT==0)
            {
                whiteZones.Add(indexW, temp);
                indexW++;
            }
           else
            {
                blackZones.Add(indexB, temp);
                indexB++;
            }
        }
    }
}
Console.WriteLine("Черни Зони Брой –> "+blackZones.Count());
foreach(var i in blackZones)
{
    Console.WriteLine(i.Key +" Зона -> "+i.Value);
}
Console.WriteLine("Бели Зони Брой -> "+whiteZones.Count());
foreach (var i in whiteZones)
{
    Console.WriteLine(i.Key + " Зона -> " + i.Value);
}




