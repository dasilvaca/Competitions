n,m = tuple(map(int,input().split()))
dic = dict()
query =""
for i in range(n + m):
    fun,ip = input().split()
    if ip[:-1] in dic:
        query += fun + " " + ip + " #" + dic[ip[:-1]] + "\n"
    else:
        dic[ip] = fun
print(query)

