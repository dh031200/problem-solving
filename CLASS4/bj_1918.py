# https://www.acmicpc.net/problem/1918

r = ''
S = []
l = '('
p = S.pop
o = ['*', '/']
for e in input():
    if e.isalpha():
        r += e
    else:
        if e == l:
            S += [e]
        elif e == ')':
            while S[-1] != l: r += p()
            p()
        elif e in o:
            while S and S[-1] in o: r += p()
            S += [e]
        else:
            while S and S[-1] != l: r += p()
            S += [e]
print(r, *S[::-1], sep='')
