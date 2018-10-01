n = int(input())

while(n>0):
    flag = False
    t = int(input())
    for i in range(2, t):
        if (t%i == 0):
            flag = True
            break
    if (flag):
        print("{} nao eh primo".format(t))
    else:
        print("{} eh primo".format(t))
    n-=1
