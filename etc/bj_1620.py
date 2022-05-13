# https://www.acmicpc.net/problem/1620

N, _, *s = open(0).read().split()
N = int(N)
d = {v: i for i, v in enumerate(s[:N])}
for i in s[N:]: print(d[i] + 1 if i.isalpha() else s[int(i) - 1])
