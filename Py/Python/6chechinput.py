# 5. Write a program to check whether the given input is digit or lowercase character or upper case character
# or a special character (use 'if-else-if' ladder)

char = input("Enter a character: ")

if char.isdigit():
    print("The input is a digit.")
elif char.islower():
    print("The input is a lowercase character.")
elif char.isupper():
    print("The input is an uppercase character.")
else:
    print("The input is a special character.")
