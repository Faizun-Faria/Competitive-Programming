import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = 75;
        
        for(int i =1 ; i <= testCase;i++){
            int count=0;
            int count1=0;
            int count2=0;
            int n = sc.nextInt();
            if (n ==0) break;
            for(int j =1 ; j <= n;j++){
                int x = sc.nextInt();
                if (x>0) count1++;
                else if (x==0) count2++;
            }
            count = count1- count2;
            System.out.println("Case "+i+": "+count);
        }
    }
}
