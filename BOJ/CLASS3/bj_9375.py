from collections import defaultdict
for _ in range(int(input())):
    C = defaultdict(list)
    for _ in range(int(input())):
        k,c = input().split()
        C[c].append(k)
    n = [len(C[i]) for i in C]
    r=1
    for i in n:
        r *= i+1
    print(r-1)
