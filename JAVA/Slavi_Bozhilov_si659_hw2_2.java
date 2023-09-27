import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw2_2 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Въведи сума в сметката:");
        int money=scan.nextInt();
        int counter=0;
        while(money>=10)
        {
        System.out.printf("Разполагаема сума: %d лв%n",money);
        System.out.print("Колко ще теглите?");
        int suma=scan.nextInt();
        if(suma>money)
        {
            int num=money-money%10;
            System.out.printf("Недостатъчна наличност, моля въведете сума до %d%n",num);
        }
        else if(suma%10!=0)
        {
            int num=suma-suma%10;
            System.out.printf("Сумата е закръглена на %d%n",num);
            money-=num;
            counter++;
        }
        else
        {
            money-=suma;
            counter++;
        }
        }
        System.out.printf("Брой тегления: %d Остатък по сметката %d лв",counter,money);
    }
}