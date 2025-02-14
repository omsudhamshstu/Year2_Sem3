import java.util.*;

public class fibonacci {
    public static void main(String[] args) {
            try (Scanner in = new Scanner(System.in)) {
                System.out.print("Enter number of terms: ");
                int terms = in.nextInt();
                int num1 = 0, num2 = 1;

        for (int i = 0; i < terms; i++) {
            System.out.print(num1 + " ");
            int sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
      }
    }
}