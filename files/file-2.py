# 21. Write a Python code to open a given file and construct a function to check for given words present in
# it and display on found.
# NOTE: If you want to execute you need to run this code in a local machine by creating a sample folder and some f1 and f2 text files in it.

def check_words_in_file(file_path, words_to_check):
    try:
        with open(file_path, 'r') as file:
            content = file.read().lower()

        found_words = []

        for word in words_to_check:
            if word.lower() in content:
                found_words.append(word)

        if found_words:
            print(f"Found the following words: {', '.join(found_words)}")
        else:
            print("No words found.")

    except FileNotFoundError:
        print("The specified file was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")


# Example usage
file_path = 'file1.txt'
words_to_check = ['Learning', 'fun']
check_words_in_file(file_path, words_to_check)