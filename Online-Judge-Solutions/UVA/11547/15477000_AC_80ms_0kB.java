import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        int k =0;
        for(int i =1; i <= testCase;i++){
            int n = sc.nextInt();
            n = (n * 567)/9;
            n = (n + 7492)*235;
            n = (n/47) - 498;
            k = (n/10)%10;
            if (k<0){
                k = - k ;
            }
            System.out.println(k);
        }
    }    
}
