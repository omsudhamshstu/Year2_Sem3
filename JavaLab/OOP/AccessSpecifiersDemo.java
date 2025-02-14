package OOP;

public class AccessSpecifiersDemo {
    public void display() {
        System.out.println("PublicClass method");
    }
}

class DefaultClass {
    void display() {
        System.out.println("DefaultClass method");
    }
}

class ProtectedClass {
    protected void display() {
        System.out.println("ProtectedClass method");
    }
}

class PrivateClass {
    private void display() {
        System.out.println("PrivateClass method");
    }

    public void showDisplay() {
        display();
    }
}