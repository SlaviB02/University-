import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw3_2
{
    public static void main(String[] args)
    {
    Scanner scan=new Scanner(System.in);
    System.out.print("Имейл? ");
    String email=scan.next();
    int index=email.indexOf("@");
    String username=email.substring(0,index);
    System.out.println("Потребителското ви име е : "+username);
    }
}