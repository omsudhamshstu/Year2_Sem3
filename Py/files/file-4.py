# 23. Write a function that reads a file file1 and displays the number of words, number of vowels,
# blank spaces, lower case letters and uppercase letters.
# NOTE: If you want to execute you need to run this code in a local machine by creating a sample folder and some f1 and f2 text files in it.

def analyze_text_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()

        num_words = len(content.split())
        num_vowels = sum(1 for char in content if char.lower() in 'aeiou')
        num_blank_spaces = content.count(' ')
        num_lowercase = sum(1 for char in content if char.islower())
        num_uppercase = sum(1 for char in content if char.isupper())

        print(f"Number of words: {num_words}")
        print(f"Number of vowels: {num_vowels}")
        print(f"Number of blank spaces: {num_blank_spaces}")
        print(f"Number of lowercase letters: {num_lowercase}")
        print(f"Number of uppercase letters: {num_uppercase}")

    except FileNotFoundError:
        print("The specified file was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
file_path = 'merged_file.txt'
analyze_text_file(file_path)