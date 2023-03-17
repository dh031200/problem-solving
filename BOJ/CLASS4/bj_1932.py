# https://www.acmicpc.net/problem/1932

T = int(input())
G = [[*map(int, input().split())] for _ in range(T)]
C = G[0]
for l in range(1, len(G)):
    S = [0 for _ in range(l + 1)]
    for i, x in enumerate(C):
        S[i], S[i + 1] = max(S[i], x + G[l][i]), max(S[i + 1], x + G[l][i + 1])
    C = S
print(max(C))
