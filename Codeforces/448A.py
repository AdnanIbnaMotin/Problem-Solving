def r():
    a = raw_input().split()
    b = raw_input().split()
    sum1 = sum2 = 0
    for i in range(len(a)):
            sum1 += int(a[i])
            sum2 += int(b[i])
    c = d = 0
    n = int(raw_input())
    if sum1 < 5 and sum1 != 0:
        n -= 1
    else:
        c = sum1 / 5
        n = n - c
        if sum1 % 5 != 0:
            n -= 1
    if sum2 < 10 and sum2 != 0:
        n -= 1
    else:
        d = sum2 / 10
        n = n - d
        if sum2 % 10 != 0:
            n -= 1
    if n >= 0:
        print("YES")
    else:
        print("NO")
        
r()
