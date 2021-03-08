import math

t = int(input())

for T in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    ct = 0
    cnt = 0
    for i in range(n-1):
        maxi = max(a[i], a[i+1])
        mini = min(a[i], a[i+1])
        if maxi / mini > 2 :
            cnt += 1
            k = math.log2(maxi) - math.log2(mini)
            if k.is_integer():
                ct += int(k)-1
            else:
                ct += int(k)
            #ct += round(abs(math.log2(a[i]) - math.log2(a[i+1]))//1)
    print(ct)
