#24. Import numpy, Plotpy and Scipy and explore their functionalities.
import numpy as np
import matplotlib.pyplot as plt
from scipy import stats

data = np.random.normal(0, 1, 1000)

mean = np.mean(data)
std_dev = np.std(data)

print(f"Mean: {mean}, Standard Deviation: {std_dev}")

plt.hist(data, bins=5, edgecolor='black')
plt.title('Histogram of Generated Data')
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.show()

test_statistic, p_value = stats.ttest_1samp(data, 0)
print(f"T-statistic: {test_statistic}, P-value: {p_value}")