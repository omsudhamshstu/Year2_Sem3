# b. Add an attribute named color to your Rectangle objects and modify draw_rectangle so that ituses the
# color attribute as the fill color.
import tkinter as tk

# Rectangle class with a color attribute
class Rectangle:
    def __init__(self, x1, y1, x2, y2, color):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.color = color

# Function to draw a rectangle
def draw_rectangle(canvas, rectangle):
    canvas.create_rectangle(
        rectangle.x1, rectangle.y1, rectangle.x2, rectangle.y2,
        outline="black", fill=rectangle.color
    )

# Example usage
root = tk.Tk()
canvas = tk.Canvas(root, width=400, height=400)
canvas.pack()

# Create a Rectangle object with a color attribute
rect = Rectangle(50, 50, 150, 150, "green")

draw_rectangle(canvas, rect)

root.mainloop()