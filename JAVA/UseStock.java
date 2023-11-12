public class UseStock {
    public static void main(String[] args)
    {
Stock s1=new Stock();
System.out.println(s1);
Stock s2=new Stock("Домати",5.40,10);
System.out.println(s2);
s1.input();
System.out.println(s1);
Stock s3=new Stock();
s3.input("test.txt");
System.out.println(s3);
Stock s4=new Stock();
System.out.println(s4);
s4.setCount(-1);
s4.setCount(20);
System.out.println(s4);
s4.setPrice(-20);
s4.setPrice(4);
System.out.println(s4);
s4.discount(25);
System.out.println(s4);
System.out.println("Обща цена на стоката: "+s4.total());
    }
}