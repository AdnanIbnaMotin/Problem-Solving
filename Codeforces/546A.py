def sb():
    i = raw_input().split()
    k = int(i[0])
    n = int(i[1])
    w = int(i[2])
    sum = j = 0
    for m in range(1, w+1):
        j = m * k
        sum += j
    if sum < n:
        print('0')
    else:
        print(sum - n)

sb()
