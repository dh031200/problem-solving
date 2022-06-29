N, M = map(int, input().split())
P, E = [], []
for _ in range(M):
    p, e = map(int, input().split())
    P.append(p)
    E.append(e)

min_price = min(min(P), min(E) * 6)
print(N // 6 * min_price + min(min(P), min(E)*(N % 6)))