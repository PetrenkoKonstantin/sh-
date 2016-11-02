import cs50

def stairs(n):        
    for i in range(0, n):
        for y in range(n -1, i, -1):
            print(" ", end="")
        for j in range(i):
            print("#", end="")
        print("##")    

n = 0
while True:
    print("height: ", end="")
    n = cs50.get_int()
    if 1 <= n <= 23:
        stairs(n)   
        break