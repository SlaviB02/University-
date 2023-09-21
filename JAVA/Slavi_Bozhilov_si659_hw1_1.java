import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw1_1
{
    public static void main(String[] args)
    {
        System.out.print("Въведи две цели числа:");
        int a,b;
        Scanner scan= new Scanner(System.in);
        a=scan.nextInt();
        b= scan.nextInt();
        System.out.println("Събиране:");
        System.out.printf("%d + %d = "+(a+b)+"\n",a,b);
        System.out.println("Разлика:");
        System.out.printf("%d - %d = "+(a-b)+"\n",a,b);
        System.out.println("Умножение:");
        System.out.printf("%d * %d = "+(a*b)+"\n",a,b);
        System.out.println("Деление:");
        System.out.printf("%d / %d = "+(a/b)+"\n",a,b);
        System.out.println("Процент:");
        System.out.printf("%d "+"%%"+" %d = "+(a%b)+"\n",a,b);
    }
}