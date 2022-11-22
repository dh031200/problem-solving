# https://www.acmicpc.net/problem/11478

s = input()
l = len(s)
print(len({s[j:j + i] for j in range(l) for i in range(l)}))
