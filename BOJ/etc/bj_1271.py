# https://www.acmicpc.net/problem/1271

N, M = map(int, input().split())
print(N // M)
print(N % (M * (N // M)))
