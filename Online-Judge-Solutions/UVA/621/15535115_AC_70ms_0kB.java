import java.util.*;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner (System.in );
        int testCase = sc.nextInt();
        for (int x =1; x <= testCase ; x++){
            String s = sc.next();
            if ((s.equals("1")) || (s.equals("4")) ||(s.equals("78"))) System.out.println("+"); 
            else if (s.endsWith("35")) System.out.println("-");
            else if ((s.endsWith("4"))&& (s.startsWith("9"))) System.out.println("*");
            else if (s.startsWith("190")) System.out.println("?");
        }           
    }
}
