# 7. Python program to print all prime numbers in a given interval (use break)
def print_primes(start, end):
    for num in range(start, end + 1):
        if num > 1:
            for i in range(2, num):
                if num % i == 0:
                    break
            else:
                print(num)
print_primes(10, 50)