/*
  Q. Accept string from user Count the frequency of each latter  
     (Entered string should be small case)
     Program 367

     using for each loop
     handling the whitespaces
     toLowercase
     replaceAll("\\s","");    <----   remove all the white spaces
 */

 import java.util.*;

public class Lb090723_04
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.toLowerCase();  // conver string to lower case
     str = str.replaceAll("\\s","");

     char Arr[] = str.toCharArray();

     int Freq[] = new int[26];
     int iCnt = 0;

     for(char Ch : Arr)
     {
        Freq[Ch - 'a']++;
     }
     System.out.println("Frequency of each latter is :");
      for(iCnt = 0;iCnt < Freq.length;iCnt++)
     {
        if(Freq[iCnt] != 0)
        {
          System.out.println("Frequency of "+(char)(iCnt + 'a')+" is "+Freq[iCnt]); 
        }
    }
   }     
}

/*
    a       97      0
    b       98      1
    c       99      2
    d       100     3
    ..

*/