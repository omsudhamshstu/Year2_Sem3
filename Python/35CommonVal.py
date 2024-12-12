# 29. Write a program to find common values between two arrays.

def find_common_values(arr1, arr2):
    return list(set(arr1) & set(arr2))

# Example usage
arr1 = [1, 2, 3, 4, 5]
arr2 = [3, 4, 5, 6, 7]
print(find_common_values(arr1, arr2))