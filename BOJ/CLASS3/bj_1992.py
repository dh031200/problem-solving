# https://www.acmicpc.net/problem/1992

N = int(input())
m = []
for i in range(N):
    m.append(list(map(int, list(input()))))

result = ''
def dv(x, y, s):
    global result
    result += '('
    if s == 1:
        if m[y][x]:
            result += '1'
        else:
            result += '0'
        if m[y][x + 1]:
            result += '1'
        else:
            result += '0'
        if m[y + 1][x]:
            result += '1'
        else:
            result += '0'
        if m[y + 1][x + 1]:
            result += '1'
        else:
            result += '0'
    else:
        a = sum(sum(v[x:x + s]) for v in m[y:y + s])
        b = sum(sum(v[x + s:x + s * 2]) for v in m[y:y + s])
        c = sum(sum(v[x:x + s]) for v in m[y + s:y + s * 2])
        d = sum(sum(v[x + s:x + s * 2]) for v in m[y + s:y + s * 2])
        if a == s ** 2:
            result += '1'
        elif a == 0:
            result += '0'
        else:
            dv(x, y, s // 2)
        if b == s ** 2:
            result += '1'
        elif b == 0:
            result += '0'
        else:
            dv(x + s, y, s // 2)
        if c == s ** 2:
            result += '1'
        elif c == 0:
            result += '0'
        else:
            dv(x, y + s, s // 2)
        if d == s ** 2:
            result += '1'
        elif d == 0:
            result += '0'
        else:
            dv(x + s, y + s, s // 2)
    result += ')'


l = sum(sum(v) for v in m)
if l == N ** 2:
    print('1')
elif l == 0:
    print('0')
else:
    dv(0, 0, N // 2)
