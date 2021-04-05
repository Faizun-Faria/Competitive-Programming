import java.util.*;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        int tCase = sc.nextInt();
        for (int x = 1; x<=tCase; x++){
            int n = sc.nextInt();
            int []arr = new int[n];
            for(int y =0;y<n;y++){
                arr[y] =sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println("Case "+x+": "+arr[n-1]);
            
        }
    }
}