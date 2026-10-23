# 8
n = int(input())

# ABABCABC
s = list(input())

for i in range(n-2):
    abc = str(f"{s[i]}{s[i+1]}{s[i+2]}")
    
    if abc == "ABC":
        print(i+1)
        exit()
    
    
print(-1)