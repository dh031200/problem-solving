n = [0]*26
s = input()
for i in s:
    n[ord(i)-97] += 1

for i in n:
    print(i, end=' ')