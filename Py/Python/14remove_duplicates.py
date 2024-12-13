# i). Write a function called remove duplicates that takes a list and returns a new list with only the unique
# elements from the original. Hint: they don’t have to be in the same order.
def remove_duplicates(arr):
    return list(set(arr))

original_arr = [1, 2, 2, 3, 4, 4, 5, 6, 6]
print("Original:", original_arr)
print("Unique:", remove_duplicates(original_arr))