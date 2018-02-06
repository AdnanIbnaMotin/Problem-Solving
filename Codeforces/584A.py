def oar():
    n = input().split()
    k = int(n[0])
    j = int(n[1])
    m = 10**k - 1
    c = e = f = 1
    d = str()
    if k == 1 and j > 9:
        print('-1')
    else:    
        if j == 10:
            for i in range(k-1):
                d += str('1')
            print(d+'0')
        else:
            for i in range(k):
                d += str(j)
            print(d)
            
oar()
