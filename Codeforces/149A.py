n = int(input())
m = input().split()
l = []
for i in range(len(m)):
    l.append(int(m[i]))
l.sort()
t = c = d = 0
s = s1 = 0
tt = -1
while c != 1:
    if t == 12:
        break
    if s >= n:
        c = 1
    else:
        s += l[tt]
        t += 1
        tt -= 1
if t == 12 and s < n:
    print('-1')
else:
    print(t)
