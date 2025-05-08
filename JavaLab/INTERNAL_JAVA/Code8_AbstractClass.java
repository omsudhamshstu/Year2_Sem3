abstract class Animal {
    abstract void makeSound();

    public void eat() {
        System.out.println("I can eat.");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Bark");
    }
}

public class Code8_AbstractClass {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.makeSound();
        myDog.eat();
    }
}

// Output: Bark
//         I can eat.