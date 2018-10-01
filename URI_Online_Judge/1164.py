n = int(input())
while(n>0):
    sum = 0
    t = int(input())
    for i in range(1, t):
        if (t%i == 0):
            print(i)
            sum += i

    if (sum == t):
        print("{} eh perfeito".format(t))
    else:
        print("{} nao eh perfeito".format(t))

    n-=1
