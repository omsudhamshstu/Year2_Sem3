# 18. a. Write a function called draw rectangle that takes a Canvas and a Rectangle as arguments and draws a
# representation of the Rectangle on the Canvas.
import tkinter as tk

# Function to draw a rectangle
def draw_rectangle(canvas, rectangle):
    x1, y1, x2, y2 = rectangle
    canvas.create_rectangle(x1, y1, x2, y2, outline="black", fill="blue")

# Example usage
root = tk.Tk()
canvas = tk.Canvas(root, width=400, height=400)
canvas.pack()

# Rectangle as (x1, y1, x2, y2)
rectangle = (50, 50, 150, 150)

draw_rectangle(canvas, rectangle)

root.mainloop()