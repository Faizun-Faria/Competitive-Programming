import java.util.Scanner;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int tCase = sc.nextInt();
        for (int x =1; x<= tCase ;x++){
            int n = sc.nextInt();
            int k =sc.nextInt();
            int sum = 0;
            for (int y =1;y <= n ;y++){
                int num = sc.nextInt();
                sum += num;
            }
            int newNum = (k*(n+1)) - sum;
            System.out.println ("Case "+x+": "+newNum);
        }
    }
}