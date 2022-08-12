# https://www.acmicpc.net/problem/11403

V = int(input())
T = []
for _ in range(V):
    T.append(list(map(int, input().split())))

for i in range(V):
    for j in range(V):
        for k in range(V):
            T[j][k] = int(bool(T[j][k] or int(bool(T[j][i] and T[i][k]))))

for i in T:
    print(*i)

