import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        for( int j =1; j<=t;j++){
            String s = sc.next();
            int i = s.length();
            int count =0;
            if (i >10){
                char c1 = s.charAt(0);
                char c2 = s.charAt(i-1);
                for (int x=1;x<i-1;x++) count++;
                System.out.println(c1+""+count+""+c2);
                
            }else{
                System.out.println(s);
            }
        }
    }
    
}