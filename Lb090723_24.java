/*
  Q. Matrix templete

     Program 387

     Input : 1.  army  2.  mary
     Output : true;

 */
 import java.util.*;

public class Lb090723_24
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     int iRow = 0, iCol = 0;

     System.out.println("Enter number of rows:");
     iRow = sobj.nextInt();

     System.out.println("Enter second column :");
     iCol = sobj.nextInt();

     Matrix mobj = new Matrix(iRow, iCol);
     
   }
}
class Matrix
{
    public int Arr[][];

    Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }
}
 