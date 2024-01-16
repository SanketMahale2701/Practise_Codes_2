/*
  Q. Accept two string from user and chackwether the string is Anagram are not

     Program 383

     Input : 1.  army  2.  mary
     Output : true;

     Approch : 2
     using readymade function : 

 */
 import java.util.*;

public class Lb090723_20
{
   public static void main(String Arg[])
   {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter frist string :");
     String str1 = sobj.nextLine();

     System.out.println("Enter second string :");
     String str2 = sobj.nextLine();
     
     if(str1.length() != str2.length())
     {
        System.out.println("Strings are not anagram");
        return;
     }

     str1 = str1.toLowerCase();  // conver string to lower case
     str2 = str2.toLowerCase();

     char Arr[] = str1.toCharArray();
     char Brr[] = str2.toCharArray();

     int Freq1[] = new int[26];
     int Freq2[] = new int[26];

     int iCnt = 0;

     for(iCnt = 0;iCnt < Arr.length;iCnt++)
     {
        Freq1[Arr[iCnt] - 'a']++;
     }

     for(iCnt = 0;iCnt < Arr.length;iCnt++)
     {
        Freq2[Brr[iCnt] - 'a']++;
     }

     for(iCnt = 0;iCnt < Freq1.length;iCnt++)
     {
        if(Freq1[iCnt] != Freq2[iCnt])
        {
            break;
        } 
     }

     if(Freq1.length == iCnt)
     {
        System.out.println("Strings are anagram");
     }
     else
     {
        System.out.println("Strings are not anagram");
     }
   }     
}
 