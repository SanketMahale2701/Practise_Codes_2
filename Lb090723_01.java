/*
  Q. Accept string from user Count the frequency of each latter  
     (Entered string should be small case)
     Program 364

     toLowercase
 */

 import java.util.*;

public class Lb090723_01 
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the string :");
     String str = sobj.nextLine();

     str = str.toLowerCase();  // conver string to lower case

     char Arr[] = str.toCharArray();

     int Freq[] = new int[26];
     int iCnt = 0;

     for(iCnt = 0;iCnt < Arr.length;iCnt++)
     {
        Freq[Arr[iCnt] - 'a']++;
     }
     System.out.println("Frequency of each latter is :");
      for(iCnt = 0;iCnt < Freq.length;iCnt++)
     {
        System.out.println("Frequency of "+(char)(iCnt + 'a')+" is "+Freq[iCnt]); 
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