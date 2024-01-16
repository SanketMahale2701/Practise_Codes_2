/*
  Q. Accept string from user and remove the extra white spaces from the string
     Program 368

     Input : My     name   is  sanket
     Output : My name is sanket

     using readymade function : replaceAll()

 */

 import java.util.*;

public class Lb090723_05
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");
     System.out.println("Updated string is :"+str);
   }     
}