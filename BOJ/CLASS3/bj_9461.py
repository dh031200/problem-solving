from collections import defaultdict
D = defaultdict(int)
for i, v in enumerate([1, 1, 1, 2, 2, 3, 4, 5, 7]):
    D[i] = v
def dp(n):
    if D[n-1] == 0:
        D[n - 1] = dp(n - 1) + dp(n - 5)
    return D[n - 1]
for _ in range(int(input())):
    print(dp(int(input())))
