# iii). Write a python code to read dictionary values from the user. Construct a function to invert its content.
# i.e., keys should be values and values should be keys.
def invert_dict(d):
    return {v: k for k, v in d.items()}

# Reading dictionary from user
n = int(input("Enter the number of key-value pairs: "))
user_dict = {}
for _ in range(n):
    key = input("Enter key: ")
    value = input("Enter value: ")
    user_dict[key] = value

# Inverting the dictionary
inverted_dict = invert_dict(user_dict)
print("Inverted Dictionary:", inverted_dict)