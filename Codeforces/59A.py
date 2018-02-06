n = raw_input()
c = d = 0
s = str()
l = list(n)
for i in range(len(l)):
    if ord(l[i]) >= 65 and ord(l[i]) <= 90:
        c += 1
    else:
        d += 1
s = ''.join(l)
if c == d or d > c:
    s = s.lower()
    print(s)
else:
    s = s.upper()
    print(s)
