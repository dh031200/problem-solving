N = input()
names = []
for i in range(int(N)):
    names.append(input())
N1 = [i[0] for i in names]
s = list(set(N1))
s.sort()
R = []
for i in s:
    if N1.count(i) >= 5:
        R.append(i)
if len(R) == 0:
    print('PREDAJA')
else:
    print(*R, sep='')
