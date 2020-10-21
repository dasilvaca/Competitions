t = int(input())

for T in range(t):
    n = int(input())
    #print(n, "<<<this is N test")
    tr = True
    dic = {}
    sts = set()
    st = ""
    for n in range(n):
        st = st+input()
    #print(st + ">>>This is string test")
    for char in st:
        sts.add(char)
    #print(str(sts) + "<<<this is set test")
    for char in sts:
        #print(st.count(char)%n,st.count(char), n)
        if (st.count(char)%(n+1) !=0):
            tr = False
            break
    if tr:
        print('YES')
    else:
        print('NO')
        


