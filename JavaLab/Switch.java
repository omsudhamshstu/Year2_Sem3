import java.util.*;

public class Switch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number (1-3): ");
        int day = scanner.nextInt();
        scanner.close();

        switch (day) {
            case 1 : System.out.println("Sunday");
            case 2 : System.out.println("Monday");
            case 3 : System.out.println("Tuesday");
            default : System.out.println("Invalid input! Enter a number between 1 and 7.");
        }
    }
}