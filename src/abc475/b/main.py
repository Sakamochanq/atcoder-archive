n = int(input())

# 1296 110 1
a = list(map(int, input().split()))

ans1 = 0
ans10 = 0
ans100 = 0

for i in range(n):
    # おつり
    # o = (1000 - (a[i] % 1000) % 1000)
    
    if a[i] % 1000 == 0:
        bils = a[i] // 1000
    else:
        bils = (a[i] // 1000) + 1
        
    pay = bils * 1000
    
    o = pay - a[i]
    
    ans100 += o // 100 
    ans10 += (o % 100) // 10
    ans1 += o % 10
    
print(ans1, ans10, ans100)