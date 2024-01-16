/*
  Q. Accept string from user and return the reverse string using readymade functions

     Program 381

     Input : Sanket Mahale
     Output : Mahale Sanket

     using readymade function : .reverse()

 */

 import java.util.*;

public class Lb090723_18
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");
     str = str.trim();

     String Arr[] = str.split(" ");
     StringBuffer Output = new StringBuffer(); 
     
     for(int iCnt = Arr.length-1;iCnt >= 0;iCnt-- )
     {
        StringBuffer sb = new StringBuffer(Arr[iCnt]); 
        Output.append(sb.append(" "));
     }
     System.out.println(Output);
   }     
}