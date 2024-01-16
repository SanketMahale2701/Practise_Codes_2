/*
  Q. Accept two string from user and chackwether the string is Anagram are not

     Program 385

     Input : 1.  army  2.  mary
     Output : true;

     Approch : 4
     (with less space complexcity)

 */
 import java.util.*;

public class Lb090723_22
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

     int Freq[] = new int[26];

     int iCnt = 0;

     for(iCnt = 0;iCnt < Arr.length;iCnt++)
     {
        Freq[Arr[iCnt] - 'a']++;
        Freq[Brr[iCnt] - 'a']--;
     }

     for(iCnt = 0;iCnt < Freq.length;iCnt++)
     {
        if(Freq[iCnt] != 0)
        {
            break;
        } 
     }

     if(Freq.length == iCnt)
     {
        System.out.println("Strings are anagram");
     }
     else
     {
        System.out.println("Strings are not anagram");
     }
   }     
}
 