import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        for (int x = 1; ;x++){
        String s = sc.nextLine();
        if(s.equals("Hajj")) System.out.println("Case "+x+": Hajj-e-Akbar");
        else if(s.equals("Umrah")) System.out.println("Case "+x+": Hajj-e-Asghar");
        else if(s.equals("*")) break;
        }
    }

}