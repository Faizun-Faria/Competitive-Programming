import java.util.Scanner;
public class Main{
    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        int tCase = sc.nextInt();
        for (int x = 1; x<=tCase; x++){
            int numOfWalls = sc.nextInt();
            int [] height = new int [numOfWalls];
            
            for (int y = 0; y <numOfWalls ; y++){
                height [y] = sc.nextInt();
            }
            int high =0;
            int low =0;
            
            for (int y = 0; y <numOfWalls-1 ; y++){
                if (height [y]<height [y+1]) high++;
                else if (height [y]>height [y+1]) low++;
            }
            System.out.println("Case "+x+": "+high+" "+low);
        }
        
    }
    
}