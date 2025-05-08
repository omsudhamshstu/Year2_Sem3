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

class BabyDog extends Dog {
    void weep() {
        System.out.println("weeping...");
    }
}

public class Code4_Multi_Level_Inheritance {
    public static void main(String[] args) {
        BabyDog babyDog = new BabyDog();
        babyDog.eat();
        babyDog.bark();
        babyDog.weep();
    }
}

// Output: eating...
//         barking...
//         weeping...