n = int(input())
arr = []
for i in range(10):
    arr.append(n)
    n = n*2

for i in range(len(arr)):
    print('N[{}] = {}'.format(i, arr[i]))
