import java.util.Scanner;
public class Main{
  public static void main (String [] args){
    Scanner sc =  new Scanner(System.in);
    String s = sc.next();
    int [] arr = new int[26];
    for (int i =0 ; i<s.length(); i++){
      arr [(int) s.charAt(i)-97]++;
    }
    int count = 0;
    for (int i =0 ; i<arr.length; i++){
      
      if (arr[i]>0 ) count++;
      
    }
    if ((count %2 )==0) System.out.println ("CHAT WITH HER!");
    else System.out.println ("IGNORE HIM!");
  }
}