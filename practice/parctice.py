def mathfun (x,y):

    if x == 0 :
        return y+1
    if x > 0 and y == 0 :
        return mathfun(x-1,1)
    if x > 0 and y > 0:
        return mathfun(x-1,mathfun(x,y-1))


print(mathfun(3,4))