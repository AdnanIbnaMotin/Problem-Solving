def ufm():
    n = raw_input()
    a = list(n)
    m = raw_input()
    b = list(m)
    c = str()
    for i in range(len(a)):
        if a[i] == b[i]:
            c += '0'
        else:
            c += '1'
    print(c)
    
ufm()
