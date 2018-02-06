def s():
    n = raw_input().split()
    k = int(n[0])
    l = int(n[1])
    m = o = 0
    s = k
    while k >= l:
        o = k / l
        s += o
        m = k % l
        k = m + o
    print(s)

s()
