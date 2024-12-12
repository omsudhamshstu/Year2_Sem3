# 10. Write a function called palindrome that takes a string argument and returns True if it is a palindrome
# and False otherwise. Remember that you can use the built-in function len to check the length of a string.
def palindrome(s):
    return s == s[::-1]
s = input("Enter a string: ")
print(palindrome(s))