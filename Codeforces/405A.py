def gf():
    n = int(raw_input())
    s = raw_input().split()
    l = t = []
    for i in range(len(s)):
        l.append(int(s[i]))
    l.sort()
    print(' '.join(map(str, l)))
    
gf()
