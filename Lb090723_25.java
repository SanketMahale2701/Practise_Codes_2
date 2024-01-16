/*
  Q. Matrix

     Program 388

     Input : 1.  army  2.  mary
     Output : true;

 */
 import java.util.*;

public class Lb090723_25
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
     mobj.Accept();
     mobj.Display();
     
   }
}
class Matrix
{
    public int Arr[][];

    Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }
    void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");

        for(int i = 0 ; i < Arr.length;i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    void Display()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Elements of Array are :");
        for(int i = 0 ; i < Arr.length;i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
 