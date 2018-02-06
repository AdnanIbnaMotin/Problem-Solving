n = int(input())
l1 = []
l2 = []
for i in range(n):
    j = input().split()
    l1.append(int(j[0]))
    l2.append(int(j[1]))
s = l2[0]
total = 0
for j in range(n):
    s = min(l2[j], s)
    total += l1[j] * s
print(total)
