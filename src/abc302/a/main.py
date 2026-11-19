a, b = map(int, input().split())

attack1 = a//b
attack2 = a % b

if(attack2 >= 1):
    attack1 += 1

print(attack1)