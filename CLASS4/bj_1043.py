# https://www.acmicpc.net/problem/1043

N, M = map(int, input().split())
T = list(map(int, input().split()))
P = []
for i in range(M):
    P.append(list(map(int, input().split())))
if T[0] == 0:
    print(M)
else:
    T = set(T[1:])
    bu = len(T)
    au = 0
    while bu != au:
        bu = au
        for i in P:
            if set(i[1:]).intersection(T):
                T.update(i[1:])
            au = len(T)
    for i in P:
        if set(i[1:]).intersection(T):
            M -= 1
    print(M)
