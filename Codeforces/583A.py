def AspRoa():
    n = int(input())
    n = n*n
    l = ['']*2505
    k = ['']*2505
    m = []
    for i in range(n):
        j = input().split()
        if not l[int(j[0])] and not k[int(j[1])]:
            l[int(j[0])] = '1'
            k[int(j[1])] = '1'
            m.append(str(i+1))
    print(' '.join(m))

AspRoa()
