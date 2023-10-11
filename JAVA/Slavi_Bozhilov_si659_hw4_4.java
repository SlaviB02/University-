import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw4_4 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Въведи размер");
        int size=scan.nextInt();
        int[]numbers=new int[size];
        Arrays.setAll(numbers, index->new Random().nextInt(10)+1);
        System.out.println(Arrays.toString(numbers));
        int s_first=0,s_second=0;
        if(size%2==0)
        {
            for(int i=0;i<size/2;i++)
            {
                s_first+=numbers[i];
            }
            for(int i=size/2;i< numbers.length;i++)
            {
                s_second+=numbers[i];
            }
        }
        else
        {
            for(int i=0;i<=size/2;i++)
            {
                s_first+=numbers[i];
            }
            for(int i=size/2;i< numbers.length;i++)
            {
                s_second+=numbers[i];
            }
        }

        if(s_first>s_second)
        {
            System.out.printf("Първата половина %d е по-голяма от втората половина %d",s_first,s_second);
        }
        else
        {
            System.out.printf("Втората половина %d е по-голяма от първата половина %d",s_second,s_first);
        }
    }
}