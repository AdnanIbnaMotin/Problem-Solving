def al():
    r = raw_input()
    l = list(r)
    j = 0
    s = t = str()
    k = []
    if len(l) == 2:
        print('0')
    else:
        for i in range(len(l)):
            if l[i] in 'abcdefghijklmnopqrstuvwxyz':
                k.append(l[i])
        s = k[0]
        for i in range(len(k)):
            if k[i] in s:
                continue
            else:
                s+=k[i]
        print(len(s))
        
al()
