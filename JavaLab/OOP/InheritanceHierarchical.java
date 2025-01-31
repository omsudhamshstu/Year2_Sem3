package OOP;
import java.util.Scanner;

// Base class
class Numbers {
    int x, y;
    Scanner in = new Scanner(System.in);
    
    void read() {
        System.out.println("Enter two integers: ");
        x = in.nextInt();
        y = in.nextInt();
    }
}

// Derived class 1
class Sum extends Numbers {
    void displaySum() {
        System.out.println("The sum of the two integers is: " + (x + y));
    }
}

// Derived class 2
class Product extends Numbers {
    void displayProduct() {
        System.out.println("The product of the two integers is: " + (x * y));
    }
}

public class InheritanceHierarchical {
    public static void main(String[] args) {
        Sum sumObj = new Sum();
        sumObj.read();
        sumObj.displaySum();  // Display sum

        Product productObj = new Product();
        productObj.read();
        productObj.displayProduct();  // Display product
    }
}