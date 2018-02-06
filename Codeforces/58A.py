def helo():
    n = raw_input()
    k = 0
    l = 'hello'
    for i in range(len(n)):
        if k == 5:
            break
        if n[i] == l[k]:
            k += 1
    
    if k < 5:
        print("NO")
    else:
        print("YES")
        
helo()
