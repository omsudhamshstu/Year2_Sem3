class Animal {
    void eat() {
        System.out.println("eating...");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("barking...");
    }
}

class Cat extends Animal {
    void meow() {
        System.out.println("meowing...");
    }
}

public class Code5_Hierarchial_Inheritance {
    public static void main(String[] args) {
        Cat cat = new Cat();
        cat.eat();
        cat.meow();
    }
}

// Output: eating...
//         meowing...