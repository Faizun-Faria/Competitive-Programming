import java.util.Scanner;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][] arr = new int[n][n];
        
        for(int x = 0; x<n;x++){
            for(int y = 0; y<n;y++){
                arr[x][y] = sc.nextInt();
            }
        }
        int primaryDiagonal =0;
        int secondaryDiagonal =0;
        for(int x = 0; x<n;x++){
            primaryDiagonal += arr[x][x]; 
        }
        for(int x = 0; x<n;x++){
            secondaryDiagonal += arr[x][n-1-x]; 
        }
        int difference = primaryDiagonal - secondaryDiagonal;
        if(difference<0){
            difference = -difference;
        }
        System.out.println(difference);
    }
    
}