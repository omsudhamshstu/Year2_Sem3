# iii) Write a function that takes a sentence as an input parameter and replaces the first letter of every word
# with the corresponding upper case letter and the rest of the letters in the word by corresponding letters in
# lower case without using a built-in function?

def capitalize_sentence(sentence):
    words = sentence.split()  # Split sentence into words
    result = []

    for word in words:
        # Capitalize the first letter and make the rest lowercase
        first_letter = word[0].upper()
        rest_of_word = word[1:].lower()
        result.append(first_letter + rest_of_word)

    # Join the words back into a sentence
    return ' '.join(result)

# Example usage
sentence = input("Enter a sentence: ")
capitalized_sentence = capitalize_sentence(sentence)
print("Capitalized Sentence:", capitalized_sentence)