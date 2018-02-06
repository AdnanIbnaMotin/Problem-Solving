n = input()
l = list(n)
t = 0
for i in range(len(l)):
    if l[i] == '4' or l[i] == '7':
        t += 1
if t == 4 or t == 7:
    print("YES")
else:
    print("NO")
