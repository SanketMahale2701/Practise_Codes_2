/*
  Q. Accept string from user and count the number of words from the string
     Program 371

     Input : My name is sanket
     Output : 4

     using readymade function : replaceAll() and trim()

 */

 import java.util.*;

public class Lb090723_08
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();                                    // <-------
     
     if(str.length() == 0)
     {
        System.out.println("Number of words are : 0");
        return;
     }

     int iCount = 0;
     for(int iCnt = 0;iCnt < str.length();iCnt++)
     {
        if(str.charAt(iCnt) == ' ')
        {
            iCount ++;
        }
     }

     System.out.println("Count of words are :"+iCount + 1);
   }     
}