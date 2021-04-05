import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int x2 = sc.nextInt();
        int x3 = sc.nextInt();
        int [] arr = new int[] {x1,x2,x3};
        Arrays.sort(arr);
        int ans = arr[2] -arr[0];
        System.out.println(ans);
    }
}
