def cp():
    n = raw_input()
    m = list(n)
    c = d = 0
    l = len(m)
    for i in range(l):
        if m[i] in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
            c += 1
        if i < l-1 and m[0] in 'abcdefghijklmnopqrstuvwxyz':
            if m[i+1] in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
                d += 1
    if c == l:
        print (n.lower())
    elif d == l-1:
        n = n.capitalize()
        print (n)
    else:
        print(n)

cp()
