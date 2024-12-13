# 17. Write a Python program to demonstrate the usage of Method Resolution Order (MRO) in multiplelevels
# of Inheritances.
class A:
    def greet(self):
        print("Hello from class A")

class B(A):
    def greet(self):
        print("Hello from class B")
        super().greet()

class C(B):
    def greet(self):
        print("Hello from class C")
        super().greet()

obj = C()
obj.greet()

# Show MRO of class C
print("MRO of class C:", C.__mro__)