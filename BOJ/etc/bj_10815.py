# https://www.acmicpc.net/problem/10815

input()
K = set(input().split())
input()
print(*[1 if i in K else 0 for i in input().split()])
