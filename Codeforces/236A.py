def BAG():
    n = raw_input()
    l = list(n)
    s = n[0]
    c = 1
    for i in range(1, len(l)):
        if l[i] in s:
            continue
        else:
            s += l[i]
            c += 1
    if c % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")
        
BAG()
