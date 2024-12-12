# c. Write a function called draw point that takes a Canvas and a Point as arguments and draws
# a representation of the Point on the Canvas.
import tkinter as tk

# Point class to represent a point with x, y coordinates
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

# Function to draw a point on the canvas
def draw_point(canvas, point):
    canvas.create_oval(
        point.x - 2, point.y - 2, point.x + 2, point.y + 2,
        outline="black", fill="red"
    )

# Example usage
root = tk.Tk()
canvas = tk.Canvas(root, width=400, height=400)
canvas.pack()

# Create a Point object
point = Point(100, 100)

# Draw the point on the canvas
draw_point(canvas, point)

root.mainloop()