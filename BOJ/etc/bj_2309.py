h = [0] * 9
for i in range(9):
    h[i] = int(input())
h.sort()
for i in range(9):
    for j in range(i + 1, 9):
        t = h.copy()
        t[i] = 0
        t[j] = 0
        if sum(t) == 100:
            break
    if sum(t) == 100:
        break
t.remove(0)
t.remove(0)
print(*t, sep='\n')
