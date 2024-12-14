# c. Write a function called draw point that takes a Canvas and a Point as arguments and draws
# a representation of the Point on the Canvas.
import tkinter as tk

# Point class to represent a point with x, y coordinates
import tkinter as tk

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def draw_point(canvas, point):
    radius = 2  # Size of the point
    canvas.create_oval(point.x - radius, point.y - radius, 
                       point.x + radius, point.y + radius, fill="black")

# Example usage
root = tk.Tk()
root.title("Draw Point")
canvas = tk.Canvas(root, width=200, height=200, bg="white")
canvas.pack()

# Create a point and draw it
p = Point(100, 100)
draw_point(canvas, p)

root.mainloop()