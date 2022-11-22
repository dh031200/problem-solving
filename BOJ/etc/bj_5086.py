while True:
    F, S = map(int, input().split(' '))
    if F == 0 and S == 0:
        break
    if S % F == 0:
        print('factor')
    elif F % S == 0:
        print('multiple')
    else:
        print('neither')
