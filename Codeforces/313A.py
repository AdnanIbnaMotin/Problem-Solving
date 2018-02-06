n = input()
st = n[0:-2]
s1 = s2 = str()
i = 0
s1 = st + n[-1]
s2 = st + n[-2]
i = max(int(s1), int(s2))
if int(n) < i:
    print(i)
else:
    print(n)
