class Animal {
    void makeSound() {
        System.out.println("Animal sound");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Bark");
    }
}

public class Code7_MethodOverriding {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        myDog.makeSound();
    }
}
// Output: Bark

// [OR]

class A1 {
void callme() {
System.out.println("super class's method");
    }
}

class B1 extends A1 {
void callme() {
System.out.println("sub class's method");
    }
}
public class MethodOverridingDemo {
public static void main(String args[]){
B1 obj = new B1();
obj.callme();
    }
}
