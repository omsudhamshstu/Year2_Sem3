# 4. Print the below triangle using for loop.
# 5
# 4 4
# 3 3 3
# 2 2 2 2
# 1 1 1 1 1
for i in range(5, 0, -1):
    print(f"{i} " * (6 - i))
