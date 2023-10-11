import java.io.*;
import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw4_1
{
    public static void main(String[] args)  {

        try {
            File myFile = new File("password.txt");
            Scanner sf = new Scanner(myFile);
            String password = sf.next();
            int MAX_ATTEMPTS = Integer.parseInt(sf.next());
            int count = 0;
            String input = "";
            Scanner scan = new Scanner(System.in);
            do {
                System.out.println("Въведи парола:");
                input = scan.next();
                count++;

            }
            while (!input.equals(password) && count != MAX_ATTEMPTS);

            if (count == MAX_ATTEMPTS) {
                System.out.println("Максимален брой неуспешни опити");
            } else {
                System.out.println("Успешен вход");
            }
        }
        catch (FileNotFoundException e)
        {
            System.out.println("Файлът не е намерен");
        }

    }
}