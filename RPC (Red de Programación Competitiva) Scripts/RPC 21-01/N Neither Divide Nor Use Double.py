#import io, os, sys
import sys
#input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline 

def fast_pow(a, b):
    ans = 1
    while b:
        if b & 1:
            ans *= a
        a *= a
        b >>= 1
    return ans

lines = sys.stdin.readlines()
lines = list(map(int, (" ".join(map(lambda x: x.strip(), lines))).split()))

#print(lines)

#for t in range(0, len(lines), 2):
while(True):
    a, n = tuple(map(int, input().split()))
    #a = lines[t]
    #n = lines[t+1]
    divisible = False
    twos = 0
    fives = 0
    if not n or a == 1:
        print("0 1")
    else:
        while(a % 2 == 0):
            a //= 2
            twos += 1
        if (a % 3):
            while (a % 5 == 0):
                a //= 5
                fives += 1
                #print(a)
            if (a == 1):
                divisible = True
                fives *= n
                twos *= n
                tens = fives if fives < twos and twos else twos#min(fives, twos)
                fives -= tens
                twos -= tens
                if fives or twos:
                    num = (fast_pow(5, fives)) if fives else (fast_pow(2,twos))
                    num = fast_pow(num, n)
                    numa = num
                    num = 1/num
                    ct = 0
                    while num % 1:#not num.is_integer(): ##isinstance(num, float):
                        tens += 1
                        ct += 1
                        num =  fast_pow(10, ct) / numa
                    print(tens,int(num))
                else:
                    print(n, tens)

                
        if not divisible:
            print("Precision Error")
        
