import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw3_3 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        System.out.print("Име?");
        String name=scan.nextLine();
        System.out.print("Буква?");
        char letter=scan.next().charAt(0);
        int count=0;
        int index=0;
        int currentIndex=0;
        name=name.toLowerCase();
       while(true)
       {
           currentIndex=name.indexOf(letter,index);
           if(currentIndex!=-1)
           {
               count++;
               System.out.printf("Срещане %d на '%s' в позиция %d %n",count,letter,currentIndex);
               index=currentIndex+1;
           }
           else
           {
               break;
           }
       }
       System.out.println("Общо срещания "+count);
    }
}