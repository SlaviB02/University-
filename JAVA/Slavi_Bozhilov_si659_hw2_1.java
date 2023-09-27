import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw2_1 {
    public static void main(String[] args)
    {
        System.out.println("Число: ");
        Scanner scan= new Scanner(System.in);
        int a=scan.nextInt();
        System.out.println("Число: ");
        int b= scan.nextInt();
        if(b!=0)
        {
            double d=(double) a/b;
            System.out.println("Частно: "+d);
        }
        else
        {
            System.out.println("На нула не се дели");
        }
    }
}