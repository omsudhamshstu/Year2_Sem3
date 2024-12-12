# 19. Write a python code to read a phone number and email-id from the user and validate it forcorrectness.
import re

def validate_input():
    phone = input("Enter phone number: ")
    email = input("Enter email ID: ")

    phone_pattern = re.compile(r'^\d{10}$|^\d{3}-\d{3}-\d{4}$|^\d{3}\.\d{3}\.\d{4}$')
    email_pattern = re.compile(r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$')

    print(f"Phone Number: {'Valid' if phone_pattern.match(phone) else 'Invalid'}")
    print(f"Email ID: {'Valid' if email_pattern.match(email) else 'Invalid'}")


if __name__ == "__main__":
    validate_input()