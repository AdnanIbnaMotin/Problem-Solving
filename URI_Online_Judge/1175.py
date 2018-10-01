arr = []
for i in range(20):
    n = int(input())
    arr.append(n)

arr.reverse()
for i in range(len(arr)):
    print("N[{}] = {}".format(i, arr[i]))
