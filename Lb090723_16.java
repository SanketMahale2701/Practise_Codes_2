/*
  Q. Accept string from user and return the reverse (jaagevar) string using readymade functions

     Program 379

     Input : Sanket Mahale
     Output : teknas elahaM

     using readymade function : .reverse()

 */

 import java.util.*;

public class Lb090723_16
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

     for(String s : Arr)
     {
        StringBuffer word = new StringBuffer(s);
        Output.append((word.reverse()).append(" "));
     }
      String Result = new String(Output);
      Result = Result.trim();

     System.out.println("Updated String is : "+Result);
   }     
}