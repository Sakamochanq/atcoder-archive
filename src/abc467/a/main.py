h, w = map(int, input().split())

# bmi = w / (h*0.01)**2

if w*10000 < 25*h*h:
    print('No')
else:
    print('Yes') 