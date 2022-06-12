# https://www.acmicpc.net/problem/11582

N = int(input())
C = list(map(int, input().split()))
K = int(input())

def s(c):
    l = len(c)
    if l > 1:
        c_1, c_2 = s(c[:l // 2]), s(c[l // 2:])
    else:
        return c
    if l == N / K * 2:
        print(*c_1,*c_2)
    C = [0] * l
    while len(c_1) > 0 or len(c_2) > 0:
        t = (len(c_1) + len(c_2)) - 1
        if len(c_1) == 0:
            C[t] = c_2.pop()
        elif len(c_2) == 0:
            C[t] = c_1.pop()
        else:
            if c_1[-1] < c_2[-1]:
                C[t] = c_2.pop()
            else:
                C[t] = c_1.pop()
    return C

s(C)