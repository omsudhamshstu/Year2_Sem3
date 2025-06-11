# OS, Python (SEM-3), OOP Java, AI (SEM-4) Codes

### Internal | External

---

### Google Colab Notebooks

Access the Google Colab Notebooks using the links below:

- **Python Codes Only (For Running the Codes):**  
  [Open in Colab](https://colab.research.google.com/drive/1LlM0m4sfO344PLCtNSCbkHeFaUvlu5gO?usp=sharing)

- **AI Codes Only (SEM-4, For Running the Codes):**  
  [Open in Colab](https://colab.research.google.com/drive/12KhMb6AZajVh0hHi-yig-Na1y2OrdWcX?usp=sharing)

---

### Java Code Execution Note

Some of the Java codes require execution via the command prompt or terminal using the `javac` (Java compiler) and `java` commands. Make sure to compile your Java files with:

```sh
javac FileName.java
```

and then run them using:

```sh
java FileName
```

Replace `FileName` with the actual name of your Java class (without the `.java` extension).

---

## Java OOP Viva Voce Questions (With Answers) - _Just an Assumption_

ℹ️ Ai Info

This section contains potential viva voce questions with answers, covering **general OOP concepts** and **file-specific implementations**.

---

### 📚 General OOP Concepts

#### 1. Core Principles  
**Q1. What is Object-Oriented Programming (OOP)?**  
 A paradigm that organizes software design around "objects" containing data (attributes) and behavior (methods), emphasizing concepts like encapsulation, inheritance, and polymorphism.  

**Q2. Why use private variables with public getters/setters?**  
 To enforce encapsulation—protecting data integrity by controlling access (e.g., validation in setters) while hiding implementation details.  

**Q3. Give a real-world example of polymorphism.**  
 `Payment` interface with `processPayment()` method implemented differently by `CreditCard`, `UPI`, and `Cash` classes.  

**Q4. How is abstraction different from encapsulation?**  
 Abstraction hides complexity by showing only essentials (e.g., interfaces), while encapsulation bundles data and methods while restricting access.  

---

### 💻 File-Specific Q&A

#### 🔍 `Code1_Debugging.java`  
**Q1. What does this program do?**  
 Demonstrates debugging techniques for logical errors (e.g., incorrect loop conditions or variable assignments).  

**Q2. How would you debug an infinite loop here?**  
 Use breakpoints in IDE, print statements, or step-through debugging to inspect loop variables and termination conditions.  

**Q3. What’s the purpose of `System.out.println` in debugging?**  
 To trace program flow and inspect variable values at runtime (though IDE debuggers are more efficient).  

**Q4. Name two Java debugging tools.**  
 Eclipse/IntelliJ debugger and `jdb` (Java Debugger command-line tool).  

#### 🛡️ `Code2_Encapsulation.java`  
**Q1. Why are variables `private` here?**  
 To prevent direct external modification, ensuring data is only changed via controlled methods (e.g., setters with validation).  

**Q2. Can a getter return a mutable object? What’s the risk?**  
 Yes, but it risks breaking encapsulation if the returned object’s state is modified externally. Defensive copying (e.g., `return new ArrayList<>(list)`) solves this.  

**Q3. What happens if a setter doesn’t validate input?**  
 Invalid data (e.g., negative age) can corrupt object state, violating encapsulation.  

**Q4. How would you make a read-only class?**  
 Declare variables `private final` and provide only getters (no setters).  

#### 🧬 `Code3_Single_Inheritance.java`  
**Q1. What’s the output of `Dog` class?**  
 Inherits `eat()` from `Animal` and overrides `bark()`, so calling `dog.eat()` prints "Animal eats" and `dog.bark()` prints "Dog barks".  

**Q2. What if `Animal.eat()` were `private`?**  
 Compilation error—private methods are not inherited.  

**Q3. Can `Dog` override `Animal`’s `static` method?**  
 No, static methods are hidden, not overridden (compile-time polymorphism).  

**Q4. How is `super` keyword used here?**  
 To call parent class methods/constructors (e.g., `super.eat()` in `Dog`).  

#### ⚙️ `Code6_MethodOverloading.java`  
**Q1. How does Java choose which overloaded method to call?**  
 Based on compile-time method signature (number/type/order of arguments).  

**Q2. Can overloaded methods have different return types?**  
 Only if parameter lists differ—return type alone doesn’t distinguish overloads.  

**Q3. What’s method overloading’s compile-time name?**  
 Static polymorphism (resolved during compilation).  

**Q4. Why can’t `int sum(int a, int b)` and `long sum(int a, int b)` coexist?**  
 Same parameter types; return types don’t differentiate overloads.  

---

### 🖥️ GUI & Swing (`Code9_SwingComponents.java`)  
**Q1. What’s the role of `ActionListener`?**  
 Interface for handling button-click events via `actionPerformed()` method.  

**Q2. How would you add a tooltip to the button?**  
 `button.setToolTipText("Click me!")`.  

**Q3. Why use `SwingUtilities.invokeLater()`?**  
 Ensures GUI updates happen on the Event Dispatch Thread (EDT) for thread safety.  

**Q4. What’s the difference between `JFrame` and `JPanel`?**  
 `JFrame` is a top-level window, while `JPanel` is a container for organizing components within a frame.  

---

❓ *Need more depth? Check the code comments or raise an issue!*
