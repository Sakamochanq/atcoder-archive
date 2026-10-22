s = input()

world, stage = s.split('-')

i = int(world) #1
j = int(stage) #8

if j == 8:
    j = 1
    i += 1
else:
    j += 1

print(f"{i}-{j}")