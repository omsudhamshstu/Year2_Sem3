package OOP;
import java.util.*;
    class Numbers {
        int x, y;
        Scanner in = new Scanner(System.in);
        void read() {
            System.out.println("Enter two integers: ");
            x=in.nextInt();
            y=in.nextInt();
        }
    }
    
    class Derived extends Numbers {
        public void display() {
            System.out.println("The sum of the two integers is: " + (x+y));
            System.out.println("The Product of the two integers is: " + (x*y));
        }
    }
    public class InheritanceSingleLevel {
    public static void main(String[] args) {
        Derived d1 = new Derived();
        d1.read();
        d1.display();
    }
}