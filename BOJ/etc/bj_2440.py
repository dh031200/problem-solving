N = int(input())

for i in range(N, 0, -1):
    for j in range(i):
        print('*', end='')
    print()
