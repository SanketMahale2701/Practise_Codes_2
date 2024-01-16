/*
  Q. Accept matrix from user and calculate the summation of all elements

     Program 389

 */
 import java.util.*;

public class Lb090723_26
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
     
     int iRet = mobj.Summation();
     System.out.println("Addition is :"+iRet);
     
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
    int Summation()
    {
        int iSum = 0;

        for(int i = 0 ; i < Arr.length;i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
              iSum = iSum + Arr[i][j];   
            }
            System.out.println();
        }
        return iSum;
    }
}
 