def aj():
    s1 = raw_input()
    s2 = raw_input()
    s3 = raw_input()
    t = list(s3)
    t.sort()
    c = ''.join(t)
    s = s1 + s2
    d = list(s)
    d.sort()
    e = ''.join(d)
    if c == e:
        print("YES")
    else:
        print("NO")
        
aj()
