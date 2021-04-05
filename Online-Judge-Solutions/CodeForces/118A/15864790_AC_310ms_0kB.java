import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = s1.toLowerCase();
        for (int x = 0;x<s2.length();x++){
            if ((s2.charAt(x)=='a')||(s2.charAt(x)=='e')||(s2.charAt(x)=='i')||(s2.charAt(x)=='o')||(s2.charAt(x)=='u')||(s2.charAt(x)=='y')){
            }else{
                System.out.print("."+s2.charAt(x));
            }
        }
    }
}