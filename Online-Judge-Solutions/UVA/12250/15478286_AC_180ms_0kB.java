import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = 2000;
        for(int i =1 ; i <= testCase;i++){
            String x = sc.nextLine();
            if (x.equals( "HELLO")) System.out.println("Case "+i+": ENGLISH");
            else if (x.equals( "HOLA")) System.out.println("Case "+i+": SPANISH");
            else if (x.equals("HALLO")) System.out.println("Case "+i+": GERMAN");
            else if (x.equals("BONJOUR")) System.out.println("Case "+i+": FRENCH");
            else if (x.equals("CIAO")) System.out.println("Case "+i+": ITALIAN");
            else if (x.equals("ZDRAVSTVUJTE")) System.out.println("Case "+i+": RUSSIAN");
            else if (x.equals("#")) break;
            else System.out.println("Case "+i+": UNKNOWN");
        }
    }
}
