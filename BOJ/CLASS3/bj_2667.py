from collections import deque

N = range(int(input()))
Z = [[bool(int(j)) for j in i] for i in [input() for _ in N]]
Q = deque()
D = [[-1,0],[1,0],[0,-1],[0,1]]
R = []
for i in N:
    for j in N:
        if Z[i][j]:
            Q.append([i,j])
            cnt = 1
            Z[i][j] = False
            while len(Q):
                x,y = Q.popleft()
                for d in D:
                    nx,ny = x+d[0], y+d[1]
                    if 0 <= nx < len(N) and 0 <= ny < len(N) and Z[nx][ny]:
                        Q.append([nx,ny])
                        cnt += 1
                        Z[nx][ny] = False
            R.append(cnt)
print(len(R))
print(*sorted(R),sep='\n')