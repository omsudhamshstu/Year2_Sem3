# 12. Write a function called has duplicates that takes a list and returns True if there is any element that
# appears more than once. It should not modify the original list.
def has_duplicates(arr):
    return len(arr) != len(set(arr))
print(has_duplicates([1, 2, 2, 3, 4]))
print(has_duplicates([1, 2, 3, 4, 4]))