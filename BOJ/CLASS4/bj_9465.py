# https://www.acmicpc.net/problem/9465

for _ in range(int(input())):
    N = int(input())
    L = [[*map(int, input().split())], [*map(int, input().split())]]
    D = [[0, 0] for _ in range(N)]
    if N == 1:
        print(max(L[0][0], L[1][0]))
    elif N == 2:
        print(max(L[1][0] + L[0][1], L[0][0] + L[1][1]))
    else:
        D[0] = [L[0][0], L[1][0]]
        D[1] = [L[1][0] + L[0][1], L[0][0] + L[1][1]]
        f = 0
        for i in range(2, N):
            D[i][f] = max(D[i - 1][not f], D[i - 2][not f]) + L[f][i]
            D[i][not f] = max(D[i - 1][f], D[i - 2][f]) + L[not f][i]
            f = not f
        print(max(D[-1]))
