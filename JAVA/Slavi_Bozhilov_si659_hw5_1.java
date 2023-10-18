import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw5_1
{
    public static void main(String[] args)
    {
        Scanner scan= new Scanner(System.in);

        System.out.print("Брой редове?");

        final int ROWS =  scan.nextInt();

        System.out.print("Брой колони?");

        final int COLUMNS =  scan.nextInt();
        int[][]numbers=new int[ROWS][COLUMNS];

        for(int row=0; row<numbers.length; row++) {
            for(int col=0; col<numbers[row].length; col++) {
                numbers[row][col] = new Random().nextInt(91)+10;
            }
        }
        System.out.println(Arrays.deepToString(numbers));

        int[]totals=new int[ROWS];
        int index=0;
        int maxSum=0;
        for(int row=0; row<numbers.length; row++)
        {
            int sum=0;
            for(int col=0; col<numbers[row].length; col++) {
                 sum+=numbers[row][col];
            }
            if(sum>maxSum)
            {
                maxSum=sum;
                index=row;
            }
            totals[row]=sum;
        }
        System.out.println(Arrays.toString(totals));
        System.out.println("Максимална сума на ред: "+(index+1));

    }
}