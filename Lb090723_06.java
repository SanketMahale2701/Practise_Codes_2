/*
  Q. Accept string from user and remove the extra white spaces from the string
     Program 369

     Input : My     name   is  sanket
     Output : My name is sanket

     using readymade function : replaceAll() and trim()

 */

 import java.util.*;

public class Lb090723_06
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();
      
     System.out.println("Updated string is :"+str);
   }     
}