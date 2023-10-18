public class Slavi_Bozhilov_si659_hw5_3 {


    public static Boolean Contains(String text,char symbol)
    {
        char[]temp=text.toCharArray();
        for(int i=0;i<temp.length;i++)
        {
            if(temp[i]==symbol)
            {
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args)
    {
    String text="I love Java";
    char symbol='v';
    if(Contains(text, symbol))
    {
        System.out.println("Символът се съдържа в низа");
    }
    else {
        System.out.println("Символът не се съдържа в низа");
    }
    }
}