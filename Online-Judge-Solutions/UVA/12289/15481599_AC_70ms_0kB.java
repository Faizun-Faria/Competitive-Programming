import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int testCase = sc.nextInt();
        for(int i =1; i <= testCase;i++){
            String str = sc.next();
            int l = str.length();
            char [] arr = new char[l];
            for (int x = 0; x < l; x++){
                arr[x] = str.charAt(x);
            }
            if(l==3){
                if ((arr[0]=='o')&&(arr[1]=='n')){
                    System.out.println(1);
                }else if((arr[0]=='o')&&(arr[2]=='e')){
                    System.out.println(1);
                }else if((arr[1]=='n')&&(arr[2]=='e')){
                    System.out.println(1);
                }else System.out.println(2);
            }else{
                System.out.println(3);
            }
        }
    }
}