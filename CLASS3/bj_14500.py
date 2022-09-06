# https://www.acmicpc.net/problem/14500

T = [[[0, 1], [0, 2], [0, 3]], [[1, 0], [2, 0], [3, 0]],                                    # 일자 블록

     [[0, 1], [1, 0], [1, 1]],                                                              # 네모 블록

     [[1, 0], [2, 0], [2, 1]], [[1, 0], [2, 0], [2, -1]], [[1, 0], [1, 1], [1, 2]],         # 니은 블록
     [[0, 1], [0, 2], [-1, 2]], [[0, 1], [1, 1], [2, 1]], [[0, 1], [0, 2], [1, 0]],
     [[0, 1], [1, 0], [2, 0]], [[0, 1], [0, 2], [1, 2]],

     [[1, 0], [1, 1], [2, 1]], [[1, -1], [1, 0], [2, -1]], [[0, 1], [-1, 1], [-1, 2]],      # ㄴㄱ 블록
     [[0, 1], [1, 1], [1, 2]],

     [[0, -1], [-1, 0], [1, 0]], [[0, -1], [-1, 0], [0, 1]], [[-1, 0], [1, 0], [0, 1]],     # 凸 블록
     [[0, -1], [0, 1], [1, 0]]]

# N, M = map(int, input().split())
# B = [list(map(int, input().split())) for _ in range(N)]
X, *Z = open(0).readlines()
N, M = map(int, X.split())
B = [list(map(int, i.split())) for i in Z]
MAX = 0
for y in range(N):
    for x in range(M):
        cnt = 0
        for i in T:
            S = B[y][x]
            for dy, dx in i:
                if 0 <= y+dy < N and 0 <= x+dx < M:
                    S += B[y + dy][x + dx]
                else:
                    S = 0
                    break
            MAX = max(MAX, S)
print(MAX)
