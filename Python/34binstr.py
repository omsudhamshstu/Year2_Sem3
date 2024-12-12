# 28. Writes a recursive function that generates all binary strings of n-bit length

def generate_binary_strings(n, result=""):
    if n == 0:
        print(result)
    else:
        generate_binary_strings(n - 1, result + "0")
        generate_binary_strings(n - 1, result + "1")

# Example usage
n = 3
generate_binary_strings(n)