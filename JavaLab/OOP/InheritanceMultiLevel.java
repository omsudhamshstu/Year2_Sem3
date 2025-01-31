package OOP;
import java.util.Scanner;

class Numbers {
    int x, y;
    Scanner in = new Scanner(System.in);
    
    void read() {
        System.out.println("Enter two integers: ");
        x = in.nextInt();
        y = in.nextInt();
    }
}

class Derived extends Numbers {
    void display() {
        System.out.println("The sum of the two integers is: " + (x + y));
        System.out.println("The product of the two integers is: " + (x * y));
    }
}

class AdvancedDerived extends Derived {
    void displayAdvanced() {
        System.out.println("The difference of the two integers is: " + (x - y));
        System.out.println("The quotient of the two integers is: " + (x / (y != 0 ? y : 1)));
    }
}

public class InheritanceMultiLevel {
    public static void main(String[] args) {
        AdvancedDerived ad = new AdvancedDerived();
        ad.read();
        ad.display();
        ad.displayAdvanced();
    }
}