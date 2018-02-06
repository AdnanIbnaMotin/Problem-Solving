n = input().split()
k = l = m = 0
if int(n[0]) % 2 == 0:
    l = int(int(n[0])/2)
else:
    l = int(int(n[0])/2) + 1
if l >= int(n[1]):
    m = int(n[1]) * 2 - 1
else:
    m = (int(n[1])-l)*2
print(m)
