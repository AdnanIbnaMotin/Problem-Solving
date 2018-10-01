n = int(input())
j = 0
for i in range(1000):
    if(j==n):
        j = 1
    else:
        j += 1
    print("N[{}] = {}".format(i ,j-1))


