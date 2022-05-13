# https://www.acmicpc.net/problem/1269

N, _, *I = open(0).read().split()
N = int(N)
print(len(set(I[:N]) ^ set(I[N:])))
