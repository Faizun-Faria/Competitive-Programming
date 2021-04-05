import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        int [] arr1 =new int[testCase];
        int [] arr2 =new int[testCase];
        for(int i =0; i < testCase;i++){
            arr1 [i] = sc.nextInt();
            arr2 [i] = sc.nextInt();
        }
        for(int i =0; i < testCase;i++){
            if(arr1 [i]>arr2 [i]){
                System.out.println(">");
            }else if (arr1 [i]<arr2 [i]){
                System.out.println("<");
            }else if (arr1 [i] ==arr2 [i]){
                System.out.println("=");
            }
        }
    }
}