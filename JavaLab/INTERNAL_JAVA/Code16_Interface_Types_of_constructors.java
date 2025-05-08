// Interface
interface Animal {
    void sound();
}

// Class implementing interface
class Dog implements Animal {
    String name;

    // Default constructor
    Dog() {
        name = "Bruno";
    }

    // Parameterized constructor
    Dog(String name) {
        this.name = name;
    }

    // Method from interface
    public void sound() {
        System.out.println(name + " says: Woof!");
    }
}

// Main class
public class Code16_Interface_Types_of_constructors {
    public static void main(String[] args) {
        Dog d1 = new Dog();            // using default constructor
        Dog d2 = new Dog("Rocky");     // using parameterized constructor

        d1.sound();
        d2.sound();
    }
}

// Output:
// Bruno says: Woof!
// Rocky says: Woof!