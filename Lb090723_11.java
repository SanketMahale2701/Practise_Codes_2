/*
  Q. Accept string from user and count how many times india word occurd in that perticular
     string

     Program 374

     Input : My name is sanket
     Output : 4

     using readymade function : split();

 */

 import java.util.*;

public class Lb090723_11
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();                                    // <-------
     
     String Arr[] = str.split(" ");
     int iCount = 0;
    
    for(int iCnt = 0;iCnt < Arr.length;iCnt++)
    {    
        if(Arr[iCnt].equals("india"))
        {
          iCount++;  
        }
    } 

     System.out.println("frequency of india word are :"+iCount);
   }     
}