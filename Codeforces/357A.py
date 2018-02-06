m = int(input())
s = input().split()
l = []
su = 0
for i in range(m):
    l.append(int(s[i]))
    su += i+1
xy = input().split()
x = int(xy[0])
y = int(xy[1])
k = int(su / m)
a = b =  c = d = 0
while d != 1:
    for j in range(m):
        if k > j+1:
            a += l[j]
        else:
            b += l[j]
    if k > m:
        c = 0
        break
    if a >= x and b >= x and a <= y and b <= y:
        c = 1
        d = 1
    else:
        k += 1
        a = 0
        b = 0
if c == 1:
    print(k)
else:
    print('0')
