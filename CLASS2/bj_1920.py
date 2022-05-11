# https://www.acmicpc.net/problem/1920

import sys

N = input()
A = list(map(int, sys.stdin.readline().split()))
A.sort()
M = input()
a = list(map(int, sys.stdin.readline().split()))

i_r = len(A) - 1

for i in a:
    l = 0
    r = i_r
    z = 0
    while l <= r:
        mid = (l + r) // 2
        if A[mid] > i:
            r = mid - 1
        elif A[mid] < i:
            l = mid + 1
        else:
            z = 1
            break
    print(z)
