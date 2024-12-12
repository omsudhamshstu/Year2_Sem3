# 25. Install NumPy package with pip and explore it.
import numpy as np

array = np.array([1, 2, 3, 4, 5])
mean = np.mean(array)
std_dev = np.std(array)
sum_array = np.sum(array)

print(f"Array: {array}")
print(f"Mean: {mean}")
print(f"Standard Deviation: {std_dev}")
print(f"Sum: {sum_array}")