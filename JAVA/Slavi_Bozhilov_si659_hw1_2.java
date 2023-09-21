import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw1_2
{
    public static void main(String[] args)
    {
        System.out.println("Въведи символ");
        Scanner scan=new Scanner(System.in);
        char c=scan.next().charAt(0);
        System.out.printf("%c --- %d",c,(int)c);
    }
}