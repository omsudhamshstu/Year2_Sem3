class Person {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}

public class Code2_Encapsulation {
    public static void main(String[] args) {
        Person person = new Person();
        person.setName("John");
        System.out.println(person.getName());
    }
}

// Output: John