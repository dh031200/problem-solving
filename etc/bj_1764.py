N, M = input().split(' ')
N = [0] * int(N)
M = [0] * int(M)
for i in range(len(N)):
    N[i] = input()
for i in range(len(M)):
    M[i] = input()
R = list(set(N) & set(M))
R.sort()
print(len(R))
for i in R:
    print(i)