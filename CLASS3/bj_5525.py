# https://www.acmicpc.net/problem/5525

N = int(input())
M = int(input())
S = input()
Z = False
C = 0
R = 0

for i in range(M - 2):
    if Z:
        Z = False
        continue
    if S[i:i+3] == 'IOI':
        Z = True
        C += 1
        if C >= N:
            R += 1
    else:
        Z = False
        C = 0
print(R)