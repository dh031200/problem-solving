# https://www.acmicpc.net/problem/1074

N, r, c = map(int, input().split())
x, y = 0, 0
s = 2 ** (N - 1)
D = [[0, 0], [0, 1], [1, -1], [0, 1]]
n = 0
R = 0
while True:
    if s == 1:
        x += D[n][0]
        y += D[n][1]
        if x == r and y == c:
            print(R)
            break
        R += 1
        n += 1
    else:
        if x <= r < x + s and y <= c < y + s:
            s //= 2
            n = 0
        else:
            n += 1
            x += s * D[n][0]
            y += s * D[n][1]
            R += s ** 2
