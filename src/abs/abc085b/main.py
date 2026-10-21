n = int(input())

dan = []

for i in range(n):
    dan.append(int(input()))
    
# setでダブり文字削除
print(len(set(dan)))