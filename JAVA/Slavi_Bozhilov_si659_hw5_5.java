import java.text.DecimalFormat;
import java.util.Arrays;

public class Slavi_Bozhilov_si659_hw5_5 {

    public  static  double[][] logArray(int[][]matrix)
    {

        double [][]result=new double[matrix.length][];
        for(int i=0;i<matrix.length;i++)
        {
            double []arr=new double[matrix[i].length];
            for(int j=0;j<matrix[i].length;j++)
            {
                arr[j]=Math.log(matrix[i][j]);
            }
            result[i]=arr;
        }
        return result;
    }
    public static void main(String[] args)
    {
      int[][]test= {
              {1,2,3},
              {4,5,6,7},
              {8,9}
      };
      System.out.println(Arrays.deepToString(test));
double[][] matrix=logArray(test);
      for(double[] r:matrix)
      {
          for(double el:r)
          {
              System.out.printf("%.2f ",el);
          }
          System.out.println();
      }
    }
}