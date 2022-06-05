import turtle as t

w=t.Screen()

w.title("Pong by team 15")
w.bgcolor("black")
w.setup(width=900, height=600)
w.tracer(0)

# Paddle left

l=t.Turtle()
l.speed(0)
l.shape("square")
l.shapesize(stretch_wid=5,stretch_len=1)
l.color("white")
l.penup()
l.goto(-400,0)

# Paddle left up
def left_up():
    y=l.ycor()
    y+=25
    l.sety(y)

# Paddle left down
def left_down():
    y=l.ycor()
    y-=25
    l.sety(y)

# Paddle right up
def right_up():
    y=r.ycor()
    y+=25
    r.sety(y)

# Paddle right down
def right_down():
    y=r.ycor()
    y-=25
    r.sety(y)


# keyboard binding
w.listen()
w.onkeypress(left_up, "w")
w.onkeypress(left_down, "s")
w.onkeypress(right_up, "Up")
w.onkeypress(right_down, "Down")

# Paddle right

r=t.Turtle()
r.speed(0)
r.shape("square")
r.shapesize(stretch_wid=5,stretch_len=1)
r.color("white")
r.penup()
r.goto(400,0)


# Ball

b=t.Turtle()
b.speed(0)
b.shape("square")
b.color("white")
b.penup()


# main game

while True:
    w.update()
    
