def bin_r(n):
    if n==1 or n==0:
        return n%2
    return str(n%2) + str(bin_r(n//2))


T = int(input())

for t in range(T):
    d={}
    n,k= map(int,input().split())
    for i in range(n):
        m,f = input().split()
        f = int(f)
        d[f]= d.get(f,[])
        d[f].append(m)
        