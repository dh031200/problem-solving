from collections import deque

N = int(input())
Z = [input() for _ in range(N)]
def bfs(cb):
    V = [[True] * N for _ in range(N)]
    Q = deque()
    D = [[-1, 0], [1, 0], [0, -1], [0, 1]]
    cnt = 0
    for i in range(N):
        for j in range(N):
            if V[i][j]:
                Q.append([i, j])
                V[i][j] = False
                while len(Q) != 0:
                    x, y = Q.popleft()
                    for d in D:
                        if cb:
                            if 0 <= x + d[0] < N and 0 <= y + d[1] < N and V[x + d[0]][y + d[1]]:
                                if (Z[x][y] == 'R' or Z[x][y] == 'G') and (Z[x + d[0]][y + d[1]] == 'R' or Z[x + d[0]][y + d[1]] == 'G'):
                                    Q.append([x + d[0], y + d[1]])
                                    V[x + d[0]][y + d[1]] = False
                                elif Z[x][y] == 'B' and Z[x + d[0]][y + d[1]] == 'B':
                                    Q.append([x + d[0], y + d[1]])
                                    V[x + d[0]][y + d[1]] = False
                        else:
                            if 0 <= x + d[0] < N and 0 <= y + d[1] < N and V[x + d[0]][y + d[1]] and Z[x][y] == Z[x + d[0]][y + d[1]]:
                                Q.append([x + d[0], y + d[1]])
                                V[x + d[0]][y + d[1]] = False

                cnt += 1
    print(cnt, end=' ')
bfs(False)
bfs(True)