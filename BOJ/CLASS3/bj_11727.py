# https://www.acmicpc.net/problem/11727

n=int(input())
d = [0] * (n+1)
d[0] = 1
d[1] = 3
def r(n):
    if d[n] == 0:
        d[n] = r(n-2)*2 + r(n-1)
    return d[n]
print(r(n-1) % 10007)