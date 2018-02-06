n = int(raw_input())
s1 = str(raw_input())
s2 = str(raw_input())
if len(s1) == n and len(s2) == n:
    i = m = k = 0
    l = t = su = 0
    for j in range(len(s1)):
        k = int(s1[j])
        l = t = 1
        while l != 0:
            if abs(k) != int(s2[j]):
                if k == 0:
                    k = 9
                else:
                    k -= 1
                i += 1
            else:
                l = 0
                k = int(s1[j])
        while t != 0:
            if abs(k) != int(s2[j]):
                if k == 9:
                    k = 0
                else:
                    k += 1
                m += 1
            else:
                t = 0
        su += min(i, m)
        i = m = 0
    print(su)
