N, K = map(int, input().split())
N = list(range(1, N + 1))
R = []
T = 0
while len(N) != 0:
    T += K - 1
    if T >= len(N):
        T = T % len(N)
    R.append(N.pop(T))
print('<', end='')
print(*R, sep=', ', end='')
print('>')
