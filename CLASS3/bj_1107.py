N = int(input())
if input() == '0':
    I = len(str(N))
    B = set('')
else:
    I = 10000000
    B = set(input().split())

if len(B.intersection(set(str(N)))) == 0:
    G = len(str(N))
else:
    G = 10000000
i = 1
Q = False
W = False
E = False
a = 10000000
b = 10000000
c = 10000000
while True:
    if N == 100:
        break
    if (100 + i == N or 100 - i == N) and not Q:
        a = i
        Q = True
        # print(min(I,i))
        # break
    if not (len(B.intersection(set(str(N - i))))) and not W:
        b = len(str(N - i)) + i
        W = True
        # print(len(str(N - i)) + i)
        # break
    if not (len(B.intersection(set(str(N + i))))) and not E:
        c = len(str(N + i)) + i
        E = True
        # print(len(str(N + i)) + i)
        # break
    if i > 100 and (sum([Q, W, E]) > 1):
        break

if N == 100:
    print(0)
else:
    print(min(a, b, c, I, G))
