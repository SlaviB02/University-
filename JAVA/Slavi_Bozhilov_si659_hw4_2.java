import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Random;
import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw4_2 {
    public static void main(String[] args) {
        PrintWriter file = null;
        try {
            Scanner scan = new Scanner(System.in);
            System.out.print("Максимално число:");
            int maxNumber = scan.nextInt();
            System.out.print("Брой числа:");
            int numberDigits = scan.nextInt();
            System.out.print("Колко серии желаете:");
            int series = scan.nextInt();
            System.out.print("Име на файл за запис:");
            String filename = scan.next();
            file = new PrintWriter(new FileWriter(filename));
            for (int i = 0; i < series; i++) {
                for (int j = 0; j < numberDigits; j++) {
                    int number = new Random().nextInt(maxNumber) + 1;
                    file.print(number + " ");
                }
                file.println();
            }
            System.out.printf("Във файла %s са записани %d щастливи комбинации за тото-2 %d от %d", filename, series, numberDigits, maxNumber);
        } catch (IOException e) {
            System.out.println("Грешка");
        } finally {
            if (file != null) file.close();
        }
    }
}