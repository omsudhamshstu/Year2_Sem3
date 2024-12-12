# 13. i) Add a comma between the characters. If the given word is 'Apple', it should become 'A,p,p,l,e'
def add_commas(input_string):
    return ','.join(input_string)

input_str = "hello"
print(add_commas(input_str))