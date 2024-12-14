# 9. Write a function called gcd that takes parameters a and b and returns their greatest common divisor.
import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

print(gcd(24, 36))  # Output: 12