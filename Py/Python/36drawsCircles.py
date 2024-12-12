# 30. Define a new class called Circle with appropriate attributes and instantiate a few Circle objects. Write a
# function called draw_circle that draws circles on the canvas

import turtle

class Circle:
    def __init__(self, radius, color):
        self.radius = radius
        self.color = color

    def draw_circle(self):
        turtle.color(self.color)
        turtle.circle(self.radius)

circle1 = Circle(50, "blue")
circle2 = Circle(100, "red")

turtle.speed(1)
circle1.draw_circle()
turtle.penup()
turtle.setposition(150, 0)
turtle.pendown()
circle2.draw_circle()

turtle.hideturtle()
turtle.done()