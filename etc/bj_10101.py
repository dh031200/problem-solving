# https://www.acmicpc.net/problem/10101

a = int(input())
b = int(input())
c = int(input())
if sum([a, b, c]) == 180:
    if a == b == c:
        print('Equilateral')
    else:
        if a == b or b == c or a == c:
            print('Isosceles')
        else:
            print('Scalene')
else:
    print('Error')
