import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw4_3 {
    public static void main(String[] args)
    {

        PrintWriter file = null;
        try {

            file = new PrintWriter(new FileWriter("text.txt"));
            Scanner scan=new Scanner(System.in);
            System.out.println("Въведи брой продукти");
            int product_count=scan.nextInt();
            double[]prices=new double[product_count];
            for(int i=0;i<prices.length;i++)
            {
                System.out.println("Въведи цена ");
                prices[i]=scan.nextDouble();
            }
            int discount_count=0;
            System.out.println("Масив преди намаление: "+ Arrays.toString(prices));
            file.println("Масив преди намаление: "+ Arrays.toString(prices));
            for(int i=0;i<prices.length;i++)
            {
                if(prices[i]>10)
                {
                    prices[i]-=prices[i]*0.20;
                    discount_count++;
                }
            }
            System.out.println("Масив след намаление: "+ Arrays.toString(prices)+"   брой намаление продукти "+discount_count);
            file.println("Масив след намаление: "+ Arrays.toString(prices)+"   брой намаление продукти "+discount_count);
        }
        catch (IOException e)
        {
            System.out.println("Грешка");
        }
        finally {
            if (file != null) file.close();
        }
    }
}