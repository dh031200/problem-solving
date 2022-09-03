# https://www.acmicpc.net/problem/11659

A, B, *S = open(0).readlines()
D = [0]
I = lambda x : map(int,x.split())
N, M = I(A)
for i, v in enumerate(I(B)):
    D.append(D[i] + v)
for s in S:
    i,j = I(s)
    print(D[j] - D[i-1])