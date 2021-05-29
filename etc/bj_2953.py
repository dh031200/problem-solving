P = [0] * 5
for i in range(5):
    P[i] = list(map(int,input().split(' ')))
    P[i] = sum(P[i])

print(P.index(max(P))+1, max(P))