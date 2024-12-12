# 11. Write a function called is sorted that takes a list as a parameter and returns True if the list is sorted in
# ascending order and False otherwise.
def is_sorted(arr):
    return arr == sorted(arr)
print(is_sorted([1, 2, 3, 4, 5]))