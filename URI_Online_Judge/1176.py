n = int(input())
for i in range(n):
    t = int(input())
    if (t == 0):
        print("Fib({}) = {}".format(t, t))
    else:
        a, b = 0, 1
        for j in range(t-1):
            a, b = b, a+b
        print("Fib({}) = {}".format(t, b))
