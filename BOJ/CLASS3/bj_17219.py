# https://www.acmicpc.net/problem/9935

N, M = input().split()
d = {}
for i in range(int(N)):
    s, p = input().split()
    d[s] = p
for i in range(int(M)):
    print(d[input()])
