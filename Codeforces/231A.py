def team():
    n = int(raw_input())
    c1 = 0
    for i in range(n):
        j = raw_input().split()
        c2 = 0
        for k in range(len(j)):
            if j[k] is '1':
                c2 += 1
        if c2 >= 2:
            c1 += 1
    print(c1)

team()
