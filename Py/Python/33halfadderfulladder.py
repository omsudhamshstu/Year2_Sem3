def half_adder(a, b):
    sum_ = a ^ b  # XOR for sum
    carry = a & b  # AND for carry
    return sum_, carry

# Full Adder
def full_adder(a, b, carry_in):
    sum1, carry1 = half_adder(a, b)
    sum_, carry2 = half_adder(sum1, carry_in)
    carry_out = carry1 | carry2  # OR for final carry
    return sum_, carry_out

# Parallel Adder (for multi-bit addition)
def parallel_adder(A, B):
    n = len(A)
    carry = 0
    result = []

    for i in range(n - 1, -1, -1):  # Add from LSB to MSB
        sum_, carry = full_adder(A[i], B[i], carry)
        result.insert(0, sum_)

    result.insert(0, carry)  # Final carry out
    return result