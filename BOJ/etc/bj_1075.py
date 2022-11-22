N = int(int(int(input()) / 100) * 100)
F = int(input())
while True:
    if N % F == 0:
        break
    N += 1
if len(str(N)) == 1:
    print('0' + str(N))
else:
    print(str(N)[-2:])
