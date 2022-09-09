# https://www.acmicpc.net/problem/1780

import sys

input = sys.stdin.readline
s = int(input())
Z = [list(map(int, input().split())) for _ in range(s)]
D = {-1: 0, 0: 0, 1: 0}


def dv(x, y, s):
    if s == 1:
        D[Z[x][y]] += 1
    else:
        for i in range(x, x + s, s // 3):
            for j in range(y, y + s, s // 3):
                if c(i, j, s // 3):
                    D[Z[i][j]] += 1
                else:
                    dv(i, j, s // 3)


def c(x, y, s):
    for i in range(x, x + s):
        for j in range(y, y + s):
            if Z[i][j] != Z[x][y]:
                return False
    return True


if c(0, 0, s):
    D[Z[0][0]] += 1
else:
    dv(0, 0, s)
for i in D:
    print(D[i])
