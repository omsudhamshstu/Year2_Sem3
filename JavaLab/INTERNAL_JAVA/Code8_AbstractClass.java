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
// ************************************ //
//Or this [without @Override]
abstract class Animal {
    abstract void weep();
    void eat() {
        System.out.println("Eating...");
    }
}

class Dog extends Animal {
    void weep() {
        System.out.println("Weeping...");
    }
}

class Sample {
    public static void main(String[] args) {
        // new Dog().eat();
        // new Dog().weep();
        Dog d1 = new Dog();
        d1.eat();
        d1.weep();
    }
}
