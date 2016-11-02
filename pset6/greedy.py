import cs50

counter = 0
coins = 25
tmp = 0

def quarter(n, coins, tmp, counter):
    counter = n // coins
    tmp += counter
    n -=(coins * counter)
    if n == 0:
        return tmp
    elif n >= 10:
        tmp1 = quarter(n, 10, tmp, counter)
        return tmp1
    elif 5 <= n < 10:
        tmp2 = quarter(n, 5, tmp, counter)
        return tmp2
    else:
        n < 5
        return tmp + n

def convert(n):
    n = n * 100
    n = round(n)
    return n

while True:
    print("O hai! How much change is owed?: ", end="")
    n = cs50.get_float()
    if 0 < n:
        n = convert(n)
        count = quarter(n, coins, tmp, counter)
        print(count)
    break    