import java.util.Scanner;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        for (int x = 1; x<= testCase ; x++){
            String [] arr1 = new String [10];
            int [] arr2 = new int [10];
            for (int y =0; y< 10; y++){
                arr1 [y] = sc.next();
                arr2 [y] = sc.nextInt();
            }
            int max =0;
            for (int y =0; y< 10; y++){
                if (max < arr2[y]){
                    max = arr2[y];
                }
            }System.out.println("Case #"+x+":");
            for (int y =0; y< 10; y++){
                if (arr2[y] == max){ 
                    System.out.println(arr1[y]);   
                }
            }
        }
    }
}