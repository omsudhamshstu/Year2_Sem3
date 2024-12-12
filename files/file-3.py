# 22. Write a Python code to Read text from a text file, find the word with most number of occurrences
# NOTE: If you want to execute you need to run this code in a local machine by creating a sample folder and some f1 and f2 text files in it.

from collections import Counter

def find_most_frequent_word(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read().lower()
        words = content.split()

        word_count = Counter(words)

        most_frequent_word, count = word_count.most_common(1)[0]

        print(f"The most frequent word is '{most_frequent_word}' with {count} occurrences.")

    except FileNotFoundError:
        print("The specified file was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
file_path = 'file2.txt'
find_most_frequent_word(file_path)