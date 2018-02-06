def ld():
    n = int(raw_input())
    l = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
    s = 0
    for i in range(len(l)):
        if n % l[i] == 0:
            s = 1
            break
    if s == 1:
        print("YES")
    else:
        print("NO")
        
ld()
