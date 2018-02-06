n = int(input())
l = input().split()
o = e = 0
a = b = 0
for i in range(len(l)):
    if int(l[i]) % 2 == 0:
        e += 1
        if e > 1:
            a = 0
            break;
        else:
            a = i+1
if e != 1:
    for j in range(len(l)):
        if int(l[j]) % 2 != 0:
            o += 1
            if o > 1:
                break
            else:
                a = j+1
print(a)
            

        
