# https://www.acmicpc.net/problem/1149
import sys
import time

sys.setrecursionlimit(10000)
N, *I = open(0).readlines()
N = int(N)

# DP (통과)
start = time.time()
H = [list(map(int, i.split())) for i in I]
D = [H[0]] + [[0] * 3 for _ in range(N - 1)]
for i in range(1, N):
    D[i][0] += min(D[i - 1][1], D[i - 1][2]) + H[i][0]
    D[i][1] += min(D[i - 1][0], D[i - 1][2]) + H[i][1]
    D[i][2] += min(D[i - 1][0], D[i - 1][1]) + H[i][2]

print(min(D[-1]))
print(f'elapsed time : {time.time() - start:.8f}')

# 재귀 백트래킹 (시간초과)
start = time.time()
H = [[0, 0, 0]] + [list(map(int, i.split())) for i in I]
def R(x): return min(G(x - 1), B(x - 1)) + H[x][0] if x else 0
def G(x): return min(R(x - 1), B(x - 1)) + H[x][1] if x else 0
def B(x): return min(R(x - 1), G(x - 1)) + H[x][2] if x else 0

print(min(R(N), G(N), B(N)))
print(f'elapsed time : {time.time() - start:.8f}')
