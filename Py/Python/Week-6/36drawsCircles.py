# 30. Define a new class called Circle with appropriate attributes and instantiate a few Circle objects. Write a
# function called draw_circle that draws circles on the canvas

import turtle
class Circle:
    def __init__(self, radius, color):
        self.radius=radius
        self.color=color
    def draw(self):
        turtle.color(self.color)
        turtle.circle(self.radius)
turtle.speed(1)
Circle(50, "red").draw()
turtle.penup()
turtle.setposition(150, 0)
turtle.pendown()
Circle(100, "blue").draw()

turtle.hideturtle()
turtle.done()