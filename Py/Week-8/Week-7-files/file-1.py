# 20. Write a Python code to merge two given file contents into a third file.
# NOTE: If you want to execute you need to run this code in a local machine by creating a sample folder and some f1 and f2 text files in it.

def merge_files(file1, file2, output_file):
    with open(file1, 'r') as f1, open(file2, 'r') as f2, open(output_file, 'w') as out:
        out.write(f1.read())
        out.write("\n")
        out.write(f2.read())

merge_files('file1.txt', 'file2.txt', 'merged_file.txt')