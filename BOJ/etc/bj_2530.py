# https://www.acmicpc.net/problem/2530

H, M, S = map(int, input().split())
N = int(input())
S += N
M += S // 60
S %= 60
H = (H + M // 60) % 24
M %= 60
print(H, M, S)
