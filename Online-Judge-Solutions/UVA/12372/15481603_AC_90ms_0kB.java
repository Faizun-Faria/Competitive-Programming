import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        int L =0;
        int W =0;
        int H =0;
        for (int x = 1; x<= testCase; x++){
            L = sc.nextInt();
            W = sc.nextInt();
            H = sc.nextInt();
            if ((L<=20)&&(W<=20)&&(H<=20)) System.out.println("Case "+x+": good");
            
            else System.out.println("Case "+x+": bad");
        }
    }
}