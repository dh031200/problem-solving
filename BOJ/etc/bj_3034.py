# https://www.acmicpc.net/problem/3034

N, W, H, *S = open(0).read().split()
for i in S: print('DA') if int(i) ** 2 <= W ** 2 + H ** 2 else print('NE')
