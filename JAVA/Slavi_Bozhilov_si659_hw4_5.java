import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Scanner;

import static java.lang.Character.isLetter;

public class Slavi_Bozhilov_si659_hw4_5 {
    public static void main(String[] args)
    {
        try (PrintWriter pw = new PrintWriter(new FileWriter("names.txt")))
        {
            String[] names = {"Димо Иванов", "Яни Янев", "Ана Попова", "Нели Ангелова"};
            System.out.println(Arrays.toString(names));
            int letters = 0;
            System.out.println("Име" + "          Брой букви");
            for (String name : names) {
                letters = name.length() - 1;
                System.out.printf("%s    %d\n", name, letters);
            }
            char[]first_letters=new char[names.length];
            for(int i=0;i<names.length;i++)
            {
               char[] name=names[i].toCharArray();
                first_letters[i]=name[0];
            }
            System.out.println(Arrays.toString(first_letters));
            String []first_names=new String[names.length];
            String []second_names=new String[names.length];
            for(int i=0;i<names.length;i++)
            {
                int index=names[i].indexOf(" ");
                first_names[i]=names[i].substring(0,index);
                second_names[i]=names[i].substring(index+1);
            }
            System.out.println(Arrays.toString(first_names));
            System.out.println(Arrays.toString(second_names));
            Arrays.sort(first_names);
            System.out.println(Arrays.toString(first_names));
            String name=new Scanner(System.in).next();
            for(var n:first_names)
            {
                if(n.equals(name))
                {
                    System.out.println("Името е намерено");
                }
            }
            for(var n:first_names)
            {
                pw.print(n+" ");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}