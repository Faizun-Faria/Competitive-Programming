import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int day = sc.nextInt();
        String str = sc.nextLine();
        if (str.endsWith("week")) {
            if ((day == 5) || (day == 6)) {
                System.out.println(53);
            } else {
                System.out.println(52);
            }
        } else if (str.endsWith("month")) {
            if (day == 30) {
                System.out.println(11);
            } else if (day == 31) {
                System.out.println(7);
            } else {
                System.out.println(12);
            }
        }

    }

}
