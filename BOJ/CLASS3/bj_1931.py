# https://www.acmicpc.net/problem/1931

N, *M = open(0).readlines()
M = [list(map(int, i[:-1].split())) for i in M]
M.sort(key=lambda x: [x[1], x[0]])
e = c = 0
for i in M:
    if e <= i[0]:
        e = i[1]
        c += 1
print(c)
