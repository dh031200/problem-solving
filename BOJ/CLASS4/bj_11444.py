# https://www.acmicpc.net/problem/11444

from collections import defaultdict

D = defaultdict(int)
D[1], D[2], D[3] = 1, 1, 2


def dq(n):
    if D[n]:
        return D[n]
    else:
        L = n // 2
        R = n - L
        D[n] = (dq(L - 1) * dq(R) + dq(L) * dq(R + 1)) % 1000000007
        return D[n]


print(dq(int(input())))
