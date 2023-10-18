import java.util.Scanner;

public class Slavi_Bozhilov_si659_hw5_2 {
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);

        System.out.println("Въведи опити: ");
        final int N_ATTEMPTS=scan.nextInt();
        System.out.println("Въведи брой атлети: ");
       final int N_ATHLETES=scan.nextInt();
       double[][] results=new double[N_ATHLETES][N_ATTEMPTS];
       double max_result=0;
       int idx_athlete=-1;
       int idx_attempt=-1;
        for (int i = 0; i < N_ATTEMPTS; i++)
        {
            System.out.println("******Опит "+(i + 1)+"******");
            for (int j = 0; j < N_ATHLETES; j++)
            {
                System.out.print("Състезател "+(j + 1)+": ");
                results[j][i]=scan.nextDouble();
                if (results[j][i] > max_result)
                {
                    max_result = results[j][i];
                    idx_athlete = j;
                    idx_attempt = i;
                }
            }
           System.out.println("Най-добър резултат : "+max_result+"м Състезател "+(idx_athlete+1)+" опит "+(idx_attempt + 1 ));

        }
        System.out.println("Победител: Съзтезател "+(idx_athlete+1));
        System.out.println("Резултат : "+max_result+"м "+" опит "+(idx_attempt + 1 ));
    }
}