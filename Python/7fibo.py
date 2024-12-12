# 6. Python Program to Print the Fibonacci sequence using while loop
n = int(input("Enter the number of terms: "))

a, b = 0, 1
count = 0

print("Fibonacci sequence:")
while count < n:
    print(a, end=" ")
    a, b = b, a + b  # Update terms
    count += 1