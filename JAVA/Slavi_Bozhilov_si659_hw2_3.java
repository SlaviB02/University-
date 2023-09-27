import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw2_3 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.println("Insert K:");
double K=scan.nextDouble();
        System.out.println("Insert p:");
int p=scan.nextInt();
        System.out.println("Insert years:");
int years=scan.nextInt();
double q=1+(double)p/100;
        System.out.println("Години   Вноска    Общо");
        double sum=0;
for(int i=1;i<=years;i++)
{
    double qn=Math.pow(q,i);
    double V=K*(qn*(q-1))/(qn-1);
    sum=i*V;
    System.out.printf("%d      %.2f      %.2f%n",i,V,sum);
}
    }
}