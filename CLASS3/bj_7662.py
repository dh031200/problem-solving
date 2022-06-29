import heapq
import sys
from collections import defaultdict
input = sys.stdin.readline
for _ in range(int(input())):
    SQ = []
    LQ = []
    d = defaultdict(int)
    for _ in range(int(input())):
        C, N = input().split()
        N = int(N)
        if C == 'I':
            d[N] += 1
            heapq.heappush(SQ, N)
            heapq.heappush(LQ, -N)
        else:
            if N == 1:
                while LQ:
                    t = -heapq.heappop(LQ)
                    if d[t] != 0:
                        d[t] -= 1
                        break
            else:
                while SQ:
                    t = heapq.heappop(SQ)
                    if d[t] != 0:
                        d[t] -= 1
                        break

    while LQ and d[-LQ[0]] == 0:
        heapq.heappop(LQ)
    while SQ and d[SQ[0]] == 0:
        heapq.heappop(SQ)
    if SQ and LQ:
        print(-LQ[0], SQ[0])
    else:
        print('EMPTY')
