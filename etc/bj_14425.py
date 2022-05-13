# https://www.acmicpc.net/problem/14425

N, _, *s = open(0).read().split()
N = int(N)
print(sum(s[N:].count(i) for i in s[:N]))
