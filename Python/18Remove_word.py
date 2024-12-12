# ii) Remove the given word in all the places in a string?
def remove_word(string, word):
    return string.replace(word, "")

input_string = input("Enter a string: ")
word_to_remove = input("Enter the word to remove: ")

result = remove_word(input_string, word_to_remove)
print("Updated String:", result)
