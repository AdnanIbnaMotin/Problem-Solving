arr_inp = []
for i in range(10):
    n = int(input())
    if (n == 0 or n < 0):
        arr_inp.append(1)
    else:
        arr_inp.append(n)


for i in range(len(arr_inp)):
    print("X[{}] = {}".format(i, arr_inp[i]))


