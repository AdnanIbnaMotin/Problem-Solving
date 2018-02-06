n = int(input())
s = input().split()
l = []
for j in range(n):
    l.append(int(s[j]))
t1 = a = 0
t2 = -1
s1 = s2 = 0
for i in range(1, n+1):
    if l[t1] > l[t2]:
        a = l[t1]
        t1 += 1
    else:
        a = l[t2]
        t2 -= 1
    if i % 2 == 0:
        s1 += a
    else:
        s2 += a
print(s2,s1)
