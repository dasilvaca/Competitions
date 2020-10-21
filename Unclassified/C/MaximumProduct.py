T = int(input())

for t in range(T):
    n = int(input())
    L = list(map(int,input().split()))
    max_prod = [0,0,0,0,0]
    for i in range(5):
        max_prod[i] = max(L)
        L.remove(max(L))
    print(max_prod[0]*max_prod[1]*max_prod[2]*max_prod[3]*max_prod[4])
