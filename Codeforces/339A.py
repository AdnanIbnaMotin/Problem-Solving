def HM():
    n = raw_input()
    l = list(n)
    k = []
    for i in range(len(l)):
        if l[i] in '123':
           k.append(l[i])
           k.sort()
    print('+'.join(k))
    
HM()
