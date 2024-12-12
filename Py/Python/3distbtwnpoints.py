# ii) Given coordinates (x1, y1), (x2, y2) find the distance between two points
import math

def distance(x1, y1, x2, y2):
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

x1, y1 = 0, 0
x2, y2 = 3, 4

dist = distance(x1, y1, x2, y2)
print(f"Distance: {dist:.2f}")
