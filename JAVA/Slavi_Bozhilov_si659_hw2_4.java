import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw2_4 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        String menu="A.C++ \nB.Java \nC.C# \nD.Other\n";
        String input;
        do {
            System.out.println(menu);
            System.out.println("Въведи опция");
            input=scan.next();
        }
        while(!(input.equals("A") ||input.equals("B") ||input.equals("C")||input.equals("D")));
    }
}