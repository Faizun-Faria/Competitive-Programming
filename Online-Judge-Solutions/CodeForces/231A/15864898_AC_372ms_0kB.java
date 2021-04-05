import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum =0;
        int imp =0;
        for(int x = 1; x<=n ; x++){
            int p = sc.nextInt();
            int v = sc.nextInt();
            int t = sc.nextInt();
            sum = p+v+t;
            if (sum>=2) imp++;
        }
        System.out.println(imp);
    }
}