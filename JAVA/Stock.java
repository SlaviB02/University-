import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class Stock
{
private String title;
private double price;
private int count;
public Stock()
{
    title="Лимонада";
    price=3.20;
    count=5;
}
public Stock(String title,double price,int count)
{
    this.title=title;
    this.price=price;
    this.count=count;
}
public  void input()
{
    System.out.println("Въведи име на стока: ");
    this.title=new Scanner(System.in).next();
    System.out.println("Въведи цена на стока: ");
    this.price=new Scanner(System.in).nextDouble();
System.out.println("Въведи брой стока: ");
    this.count=new Scanner(System.in).nextInt();
}
public  void input(String filename)
    {
        File file=new File(filename);
        try {
            Scanner scan=new Scanner(file);
            this.title=scan.next();
            this.price=Double.parseDouble(scan.next());
            this.count=Integer.parseInt(scan.next());

        } catch (FileNotFoundException e) {
            System.out.println("Файлът не е намерен");
        }

    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
    try{
        if(price<=0)
        {
            throw new IllegalArgumentException("Отрицателна цена на стоката");
        }
        this.price = price;
    }
    catch (Exception e)
    {
      System.out.println(e.getMessage());
    }
    }

    public int getCount() {
        return count;
    }

    public void setCount(int count) {
    try {
        if(count<=0)
        {
            throw new IllegalArgumentException("Отрицателен брой на стоката");
        }
        this.count=count;
    }
    catch (Exception e)
    {
        System.out.println(e.getMessage());
    }

    }

    @Override
    public String toString() {
       return "Име на стока: "+title+" цена: "+price+" брой: "+count;
    }
    public double total()
    {
        return price*count;
    }
    public void discount(int percent)
    {
        price=price-price*((double) percent /100);
    }

}
