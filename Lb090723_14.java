/*
  Q. Accept string from user and return the reverse string using readymade functions

     Program 377

     Input : Sanket 
     Output : teknas

     using readymade function : .reverse()

 */

 import java.util.*;

public class Lb090723_14
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     StringBuffer sbobj = new StringBuffer(str);
     
     sbobj = sbobj.reverse();

     System.out.println("Updated String is :"+sbobj);
   }     
}