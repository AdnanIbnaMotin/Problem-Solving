def d():
    r = input().strip()
    s = 'WUB'
    k = []
    s1 = r.split(s)
    s2 = str()
    for i in range(len(s1)):
        if s1[i] != '':
            s2 += s1[i] + ' '
    print(s2)
    
d()
