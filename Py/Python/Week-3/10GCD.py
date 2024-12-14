# 9. Write a function called gcd that takes parameters a and b and returns their greatest common divisor.
import math

# Input two numbers
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Calculate GCD
gcd = math.gcd(num1, num2)

# Display the result
print(f"The GCD of {num1} and {num2} is {gcd}.")