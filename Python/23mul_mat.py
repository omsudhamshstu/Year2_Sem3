# iii) Write a python program to perform multiplication of two square matrices
import numpy as np

matrix1 = np.array([[1, 2], [3, 4]])
matrix2 = np.array([[5, 6], [7, 8]])

result = np.matmul(matrix1, matrix2)

print("Product of matrices:\n", result)