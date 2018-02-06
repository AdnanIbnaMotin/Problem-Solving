def t():
    k = []
    n = int (raw_input())
    rem = m = sm = 0
    for i in range(n):
        j = raw_input().split()
        k.append(j)
        rem = int(k[i][1]) - int(k[i][0])
        sm += rem
        if sm > m:
            m = sm
    print(m)

t()
