# https://www.acmicpc.net/problem/2579

_,*S = open(0).readlines()
for s in S:
    N, M, n, m = map(int, s.split())
    cnt = n
    for i in range(M):
        t = (n+(i*(N-M)))%M
        if not t:
            t = M
        if t == m:
            break
        cnt += N
    print(cnt if cnt<=N*M else -1)