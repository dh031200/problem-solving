# https://www.acmicpc.net/problem/1697

from collections import deque

N, K = map(int, input().split())

Q = deque()
Q.append(N)
V = [0] * 100001
V[N] = 1
while True:
    if V[K]:
        break
    C = Q.popleft()
    if C+1 <= 100000 and not  V[C + 1]:
        Q.append(C + 1)
        V[C+1] = V[C] + 1
    if C*2 <= 100000 and not V[C*2]:
        Q.append(C*2)
        V[C*2] = V[C] + 1
    if C-1 >= 0 and not V[C-1] :
        Q.append(C-1)
        V[C-1] = V[C] + 1

print(V[K] - 1)
