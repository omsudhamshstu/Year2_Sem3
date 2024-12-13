#26. Write a program to implement Digital Logic Gates – AND, OR, NOT, EX-OR

def AND(a, b):
    return a & b

def OR(a, b):
    return a | b

def NOT(a):
    return ~a

def XOR(a, b):
    return a ^ b

a, b = 1, 0
print(f"AND({a}, {b}) = {AND(a, b)}")
print(f"OR({a}, {b}) = {OR(a, b)}")
print(f"NOT({a}) = {NOT(a & 1)}")  # Only one bit, hence a & 1
print(f"XOR({a}, {b}) = {XOR(a, b)}")