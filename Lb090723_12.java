/*
  Q. Accept string from user and accept another word and count how many times that word occurd in that perticular
     string

     Program 375

     Input : My name is sanket
     Output : 4

     using readymade function : split();

 */

 import java.util.*;

public class Lb090723_12
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     System.out.println("Enter the another word that you want to chack :");
     String word = sobj.nextLine();

     str = str.replaceAll("\\s+"," ");  // <-------
     str = str.trim();                                    // <-------
     
     String Arr[] = str.split(" ");
     int iCount = 0;
    
    for(int iCnt = 0;iCnt < Arr.length;iCnt++)
    {    
        if(Arr[iCnt].equals(word))
        {
          iCount++;  
        }
    } 

     System.out.println("frequency of india word are :"+iCount);
   }     
}