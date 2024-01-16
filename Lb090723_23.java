/*
  Q. Accept two string from user and chackwether the string is Anagram are not

     Program 386

     Input : 1.  army  2.  mary
     Output : true;

     Approch : 5
     using readymade function

 */
 import java.util.*;

public class Lb090723_23
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

     str1 = str1.toLowerCase();
     str2 = str2.toLowerCase();

     char Arr[] = str1.toCharArray();
     char Brr[] = str2.toCharArray();

     Arrays.sort(Arr);    //--------------------
     Arrays.sort(Brr);    //------------------------

     if(Arrays.equals(Arr,Brr))
     {
        System.out.println("Strings are anagram");
     }
     else
     {
        System.out.println("Strings are not anagram");
     }
   }     
}
 