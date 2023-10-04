import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw3_1 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        String firstName="";
        String secondName="";
        System.out.print("Въведи първо име: ");
        firstName=scan.next();
        System.out.print("Въведи второ име: ");
        secondName=scan.next();
        if(firstName.length()>secondName.length())
        {
            System.out.printf("Името %s е по-дълго от името %s %n",firstName,secondName);
        }
        else
        {
            System.out.printf("Името %s е по-късо от името %s %n",firstName,secondName);
        }
    }
}