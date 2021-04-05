import java.util.*;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner (System.in );
        int testCase = sc.nextInt();
        for (int x =1; x <= testCase ; x++){
            int n = sc.nextInt();
            int [] arr = new int [n];
            int ans = 0;
            for (int y = 0; y< n; y++){
                arr[y] = sc.nextInt();
            }
            Arrays.sort(arr);
            ans = (arr[n-1]-arr[0])*2;
            System.out.println(ans);
        }
    }
    
}