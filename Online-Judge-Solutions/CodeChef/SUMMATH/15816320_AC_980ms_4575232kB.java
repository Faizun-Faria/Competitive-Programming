import java.util.Scanner;
public class Main{
  public static void main (String [] args){
    Scanner sc =  new Scanner(System.in);
    int t = sc.nextInt();
    for (int i =0; i <t; i++){
      long sum = 0;
      long n = sc.nextLong();
      for (long j =10; j <=n ;j +=10 ){
        if ((n%j)>=0) sum+=j;
      }
      System.out.println(sum);
    }
  }
}
