# https://www.acmicpc.net/problem/1991

N = int(input())
D = {'A': 1}
M = 0

for _ in range(N):
    a, b, c = input().split()
    D[b] = D[a] * 2
    D[c] = D[b] + 1
    M = max([M, D[b], D[c]])
L = [''] * (M + 1)
for k in D:
    L[D[k]] = '' if k == '.' else k


def preorder(idx=0, s=''):
    if L[idx] not in s: s += L[idx]
    if L[idx * 2] not in s: s = preorder(idx * 2, s)
    if L[idx * 2 + 1] not in s: s = preorder(idx * 2 + 1, s)
    return s


def inorder(idx=0, s=''):
    if L[idx * 2] not in s: s = inorder(idx * 2, s)
    if L[idx] not in s: s += L[idx]
    if L[idx * 2 + 1] not in s: s = inorder(idx * 2 + 1, s)
    return s


def postorder(idx=0, s=''):
    if L[idx * 2] not in s: s = postorder(idx * 2, s)
    if L[idx * 2 + 1] not in s: s = postorder(idx * 2 + 1, s)
    if L[idx] not in s: s += L[idx]
    return s


print(preorder())
print(inorder())
print(postorder())
