public class Code1_Debugging {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        System.out.println("Sum of even numbers: " + sum);
    }
}

// Output: Sum of even numbers: 20