def ex():
    a = int(raw_input())
    b = int(raw_input())
    c = int(raw_input())
    d = a + (b * c)
    max = d
    e = a * (b + c)
    if max < e:
        max = e
    f = a * b * c
    if max < f:
        max = f
    g = (a + b) * c
    if max < g:
        max = g
    h = a + b + c
    if max < h:
        max = h
    print(max)
    
ex()
