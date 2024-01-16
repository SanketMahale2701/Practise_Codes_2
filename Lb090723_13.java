/*
  Q. Accept string from user and return the largest word from the string

     Program 376

     Input : My name is sanket Shashikant mahale
     Output : Shashikant

     using readymade function : split();

 */

 import java.util.*;

public class Lb090723_13
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();                                    // <-------
     
     String Arr[] = str.split(" ");
     int iMax = 0;
     int iPos = 0;
    
    for(int iCnt = 0;iCnt < Arr.length;iCnt++)
    {    
        if(Arr[iCnt].length() > iMax)
        { 
            iMax = Arr[iCnt].length();
            iPos = iCnt;
        }
    } 

     System.out.println("frequency of india word are :"+iMax);
   }     
}