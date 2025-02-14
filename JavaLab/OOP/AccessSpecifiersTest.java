package OOP;

public class AccessSpecifiersTest {
    public static void main(String[] args) {
        AccessSpecifiersDemo publicObj = new AccessSpecifiersDemo();
        publicObj.display();

        DefaultClass defaultObj = new DefaultClass();
        defaultObj.display();

        ProtectedClass protectedObj = new ProtectedClass();
        protectedObj.display();

        PrivateClass privateObj = new PrivateClass();
        privateObj.showDisplay();
    }
}