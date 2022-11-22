S = input()
r = 1
for i in range(int(len(S)/2)):
    if S[i] != S[-i-1]:
        r = 0
        break
print(r)