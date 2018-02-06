def c():
    n = int(raw_input())
    l = m = 0
    if n % 2 == 0:
        l = n / 2
        m = n - l
        print(m)
    else:
        l = n / 2
        m = l - n
        print(m)
        
c()
