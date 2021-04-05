import java.util.*;
public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        String st = sc.next();
        String s = st.toLowerCase();
        int i = s.length();
        int aLength = 1;
        for (int x =0; x<i;x++){
            char c = s.charAt(x);
            if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='y')) {
            }else{
                aLength++;
            }
        }
        int count2 = 0;
        char [] arr =new char [aLength];
        for (int x =0; x<i;x++){
            char c = s.charAt(x);
            if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='y')) {
            }else{
                arr[count2] = c;
                count2++;   
            }
        }
        for (int x =0; x<count2;x++){
           System.out.print("."+arr[x]);
        }
    }
    
}