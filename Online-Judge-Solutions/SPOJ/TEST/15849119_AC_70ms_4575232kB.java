import java.util.Scanner;
public class Main{
    public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
    for (int x =1; ;x++){
    int num = sc.nextInt();
    if (num ==42) break;
    else System.out.println(num);
        }
    }
}