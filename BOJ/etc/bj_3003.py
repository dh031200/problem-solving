# https://www.acmicpc.net/problem/3003

t = [1, 1, 2, 2, 2, 8]
k = map(int, input().split())
for i, v in enumerate(k): print(t[i] - v, end=' ')
