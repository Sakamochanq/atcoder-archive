n, m = map(int, input().split())

kaisuu = m // n

nokori  = m % n

ans = []

for i in range(n):
    ans.append(kaisuu)

for i in range(nokori):
    ans[i] += 1

for x in ans:
    print(x)