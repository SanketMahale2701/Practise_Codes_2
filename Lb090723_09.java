/*
  Q. Accept string from user and count the number of words from the string
     Program 372

     Input : My name is sanket
     Output : 4

     using readymade function : split();

 */

 import java.util.*;

public class Lb090723_09
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();                                    // <-------
     
     String Arr[] = str.split(" ");
     

     System.out.println("Number of words are :"+Arr.length);
   }     
}