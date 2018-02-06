def vc():
    n = int(raw_input())
    c = sum = sum1 = 0
    if n == 1:
        print(n)
    else:
        for i in range(1, n+1):
            sum += i
            sum1+= sum
            if sum1 > n:
                break
            c+=1
        print(c)
        
vc()
