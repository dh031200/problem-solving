# https://www.acmicpc.net/problem/9019

from collections import deque

def D(n):
    return n * 2 % 10000

def S(n):
    return n - 1 if n > 0 else 9999

def L(n):
    o = n//1000
    n = n%1000*10 + o
    return n

def R(n):
    o = n % 10
    n = n // 10 + o*1000
    return n

C = {'D': D, 'S': S, 'L': L, 'R': R}
_, *I = open(0).readlines()
for i in I:
    s, e = map(int, i.split())
    Q = deque()
    V = [0] * 10000
    Q.append(s)
    while len(Q):
        q = Q.popleft()
        if q == e:
            break
        # V[q] = 1
        for c in C:
            n = C[c](q)
            if not V[n]:
                Q.append(n)
                V[n] = [q,c]
    r = []
    while V[q][0] != s:
        r.append(V[q][1])
        q = V[q][0]
    r.append(V[q][1])
    print(*reversed(r),sep='')