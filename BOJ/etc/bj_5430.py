for i in range(int(input())):
    B = 1
    Fc = 0
    C = input()
    N = int(input())
    L = []
    R = []
    exec('L=' + input())
    if C.count('D') > len(L):
        print('error')
    else:
        for j in range(len(C)):
            if C[j] == 'R':
                B *= -1
            elif C[j] == 'D':
                if B > 0:
                    Fc += 1
                else:
                    N -= 1
        R = L[Fc:N]
        if B < 0:
            R.reverse()
        print('[', end='')
        print(*R, sep=',', end='')
        print(']')
