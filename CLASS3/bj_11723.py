# https://www.acmicpc.net/problem/11723

import sys
S = set()
def a(n): S.add(int(n[0]))
def r(n):
    try:
        S.remove(int(n[0]))
    except:
        pass
def c(n): print(1 if int(n[0]) in S else 0)
def t(n): S.remove(int(n[0])) if int(n[0]) in S else S.add(int(n[0]))
def l(_): S.update(range(1,21))
def e(_): S.clear()
cmd = {
    'add': a,
    'remove' : r,
    'check' : c,
    'toggle' : t,
    'all' : l,
    'empty' : e
}

for i in range(int(sys.stdin.readline())):
    s = sys.stdin.readline().split()
    cmd[s[0]](s[1:])