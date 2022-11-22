# https://www.acmicpc.net/problem/1541

S = input()
S = S.split('-')
S = [str(sum(map(int,i.split('+')))) for i in S]
print(eval('-'.join(S)))