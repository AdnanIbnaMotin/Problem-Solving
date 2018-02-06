def ck():
    n = int(raw_input())
    l = raw_input().split()
    c = d = e = f = 0
    if l[0] != '25':
        print("NO")
    else:
        for i in range(n):
            if l[i] == '25':
                d += 1
            elif l[i] == '50':
                if d > 0:
                    d -= 1
                    e += 1
                else:
                    c = 1
            elif l[i] == '100':
                if d > 0 and e > 0:
                    d -= 1
                    e -= 1
                elif d > 2:
                    d -= 3
                else:
                    f = 1
        if c == 1 or f == 1:
            print("NO")
        else:
            print("YES")
            
ck()
