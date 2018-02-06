def foot():
    n = raw_input()
    l = list(n)
    le = len(l)
    c = d = i = 0
    while i != le:
        if l[i] is '1':
            c += 1
            d = 0
            if c >= 7:
                break
        if l[i] is '0':
             d += 1
             c = 0
             if d >= 7:
                 break
        i += 1
    if c >= 7 or d >= 7:
        print("YES")
    else:
        print("NO")

foot()
