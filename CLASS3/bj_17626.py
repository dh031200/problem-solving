# https://www.acmicpc.net/problem/17626

# Solution 1. Brute force
N=int(input())
R=int(N**0.5)
M=4
for i in range(R,0,-1):
    q = i**2
    if q == N:
        M = min(M,1)
        break
    elif q > N:
        continue
    for j in range(i,0,-1):
        w = i**2 + j**2
        if w == N:
            M = min(M,2)
            break
        elif w > N:
            continue
        for k in range(j,0,-1):
            r = i**2 + j**2 + k**2
            if r == N:
                M = min(M,3)
                break
            elif r > N:
                continue
print(M)

# Solution 2. Dynamic programming
N = int(input())
D = [0, 1]
Z = []
M = lambda x, y: min(x, y)
if N > 1:
    D += [0] * (N - 1)
for i in range(1, N + 1):
    if int(i ** 0.5) == i ** 0.5:
        D[i] = 1
        Z.append(i)
    else:
        m = 5
        if i // 2 == i / 2:
            m = M(m, D[i // 2] * 2)
        if i // 3 == i / 3:
            m = M(m, D[i // 3] * 3)
        if i // 4 == i / 4:
            m = M(m, D[i // 4] * 4)
        for j in Z[-1::-1]:
            m = M(m, D[i-j] + 1)
        m = M(m, D[i - Z[-1]] + 1)
        D[i] = M(m, D[i - 1] + 1)
print(D[N])