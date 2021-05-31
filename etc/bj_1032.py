N = [0] * int(input())
for i in range(len(N)):
    N[i] = input()

for i in range(len(N[0])):
    same = True
    for j in range(len(N) - 1):
        if N[j][i] != N[j + 1][i]:
            same = False
            break
    if same:
        print(N[0][i], end='')
    else:
        print('?', end='')
