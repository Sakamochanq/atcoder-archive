A = int(input())
B = int(input())
C = int(input())

Sum = int(input())

ans = 0

for i in range(A+1):
    for j in range(B+1):
        for k in range(C+1):
            
            x = 500*i + 100*j + 50*k
            
            if x == Sum:
                ans += 1

print(ans)
                