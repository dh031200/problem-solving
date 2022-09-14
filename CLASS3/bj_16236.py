# https://www.acmicpc.net/problem/16236

from collections import deque

D = [[-1, 0], [0, -1], [0, 1], [1, 0]]
size = 2
sec = 0
N = int(input())
B = [list(map(int, input().split())) for _ in range(N)]
f = 0


def check_target():
    target = []
    for i in range(N):
        for j in range(N):
            n = B[i][j]
            if n == 9:
                now = [i, j]
            elif 0 < n < size:
                target.append([i, j])
    return now, target


while True:
    now, t = check_target()
    if not t:
        break
    B[now[0]][now[1]] = 0
    V = [[j > size for j in i] for i in B]
    V[now[0]][now[1]] = True
    Q = deque()
    Q.append([now, sec])
    new_sec = 99999
    coords = []
    while len(Q):
        c, s = Q.popleft()
        if s > new_sec:
            break
        if 0 < B[c[0]][c[1]] < size:
            new_sec = s
            coords.append(c)
        for i in D:
            dy, dx = c[0] + i[0], c[1] + i[1]
            if 0 <= dy < N and 0 <= dx < N and not V[dy][dx]:
                V[dy][dx] = True
                Q.append([[dy, dx], s + 1])
    if not coords:
        break
    coords.sort()
    now = coords[0]
    B[now[0]][now[1]] = 9
    sec = new_sec
    f += 1
    if f == size:
        size += 1
        f = 0
print(sec)
