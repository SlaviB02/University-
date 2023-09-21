import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw1_4 {
    public static void main(String[] args)
    {
        System.out.print("Въведи две цели числа:");
        int a,b;
        Scanner scan= new Scanner(System.in);
        a=scan.nextInt();
        b= scan.nextInt();
        System.out.println("Въведи операция за изпълнение");
        String operation=scan.next();
        switch (operation)
        {
            case"Събиране": System.out.printf("%d + %d = "+(a+b)+"\n",a,b);break;
            case"Изваждане": System.out.printf("%d - %d = "+(a-b)+"\n",a,b);break;
            case"Умножение": System.out.printf("%d * %d = "+(a*b)+"\n",a,b);break;
            case"Деление": System.out.printf("%d / %d = "+(a/b)+"\n",a,b);break;
            case"Процент": System.out.printf("%d "+"%%"+" %d = "+(a%b)+"\n",a,b);break;
        }
    }
}