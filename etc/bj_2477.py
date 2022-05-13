# https://www.acmicpc.net/problem/2477

K = int(input())
r, c, z = [], [], []
for i in range(6):
    d, s = map(int, input().split())
    if d < 3:
        r += [s]
    else:
        c += [s]
    z += [d]
l = lambda x, y: x[(x.index(max(x)) + y) % 3]
if sum(z) == 15:
    v, k = 1, 2
else:
    k, v = 1, 2
print((max(c) * max(r) - l(c, v) * l(r, k)) * K)
