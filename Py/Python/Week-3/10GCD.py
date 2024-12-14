# 9. Write a function called gcd that takes parameters a and b and returns their greatest common divisor.

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

print(gcd(24, 36))