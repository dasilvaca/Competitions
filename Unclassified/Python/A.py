init = int(input())
amo = input().split()
dic = {}
for art in amo:
    dic[art] = dic.get(art,0) +1
moves = int(input())

for i in range(moves):
    tr = False
    tra = False
    move = input().split()
    if move[0] == "-":
        dic[move[1]] = dic[move[1]] -1
    else:
        dic[move[1]] = dic.get(move[1], 0) + 1
    ls = max(set(dic.values()))
    suma = 0
    for it in dic:
        suma += dic[it] // 2
        if suma > 3:
            tr = True
        if ls > 3:
            tra = True
        if tr and tra:
            print("YES")
            break
    if not (tr and tra):
        print("NO")