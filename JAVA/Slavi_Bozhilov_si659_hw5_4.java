import java.util.Arrays;

public class Slavi_Bozhilov_si659_hw5_4 {

    public static void JobRaise(double[]salaries)
    {
        for(int i=0;i<salaries.length;i++)
        {
            if(salaries[i]<800)
            {
                salaries[i]+=salaries[i]*0.10;
            }
            else if(salaries[i]>=800 && salaries[i]<=1500)
            {
                salaries[i]+=salaries[i]*0.05;
            }
            else if (salaries[i]>1500)
            {
                salaries[i]+=salaries[i]*0.03;
            }
        }
    }
    public static void main(String[] args)
    {
 double[]salaries={500,1200,1600,400,900,2000};
 System.out.println("Заплати преди увеличението:");
 System.out.println(Arrays.toString(salaries));
 System.out.println("Заплати след увеличението:");
JobRaise(salaries);
 System.out.println(Arrays.toString(salaries));
    }
}