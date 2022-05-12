# https://www.acmicpc.net/problem/1676

N = int(input())
r = N // 10 * 2
if N % 10 >= 5:
    r += 1
r += N // (5 ** 2)
r += N // (5 ** 3)
print(r)