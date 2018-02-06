def t():
    s = raw_input()
    l = list(s)
    l.reverse()
    m = ''.join(l)
    t = raw_input()
    if m == t:
        print("YES")
    else:
        print("NO")
        
t()
