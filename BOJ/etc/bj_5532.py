# https://www.acmicpc.net/problem/5532

N = [int(input()) for _ in range(5)]
R = max(N[1] / N[3], N[2] / N[4])
if bool(R - int(R)): R += 1
print(N[0] - int(R))
