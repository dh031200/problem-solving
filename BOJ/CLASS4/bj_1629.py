# https://www.acmicpc.net/problem/1629

from collections import defaultdict

A, B, C = map(int, input().split())
D = defaultdict(int)
D[1] = A % C


def dq(n):
    if D[n]:
        return D[n]
    else:
        if n > 1:
            L = n // 2
            R = n - L
            D[n] = (dq(L) * dq(R)) % C
            return D[n]
        else:
            return D[1]


print(dq(B))
