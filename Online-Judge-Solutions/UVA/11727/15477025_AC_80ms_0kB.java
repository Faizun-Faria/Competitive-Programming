import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        int [] arr =new int[3];
        
        for(int i =0; i < testCase;i++){
            for(int j =0; j < 3;j++){
                arr [j] = sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println("Case "+(i+1)+": "+arr [1]);
        }
    }    
}
