def lfm():
    n = int(raw_input())
    l = m = o = p = 0
    for i in range(2, n+1):
        l = n - i
        m = n - l
        if l >= 2:
            for j in range (2, l+1):
                if l % j == 0:
                    o+=1
        if m >= 2:
            for k in range(2, m+1):
                if m % k == 0:
                    p+=1
        if o > 1 and p > 1:
            print l, m
            break
        p = o = 0


lfm()
