def game():
    n = raw_input().split()
    n1 = int(n[0])
    n2 = int(n[1])
    k1 = int(n[1])
    k2 = int(n[2])
    if n1 == n2:
        print("Second")
    elif n1 > n2:
        print("First")
    else:
        print("Second")
    
game()
