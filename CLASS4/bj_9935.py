# https://www.acmicpc.net/problem/9935

s = input()
b = list(input())
k = []
z = len(b)
for i in s:
    k += [i]
    if k[-z:] == b:
        del k[-z:]
print(''.join(k)) if len(k) != 0 else print('FRULA')
