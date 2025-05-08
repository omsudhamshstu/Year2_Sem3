class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

public class Code13_ExceptionHandling {
    public static void main(String[] args) {
        try {
            int result = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero");
        }

        try {
            throw new CustomException("This is a custom exception");
        } catch (CustomException e) {
            System.out.println(e.getMessage());
        }
    }
}
// Output: Cannot divide by zero
//         This is a custom exception