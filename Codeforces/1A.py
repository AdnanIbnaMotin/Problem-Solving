import math
s = raw_input().split()
n = int(s[0])
m = int(s[1])
a = int(s[2])
j = math.ceil(n / float(a)) * math.ceil(m / float(a))
print(int(j))
