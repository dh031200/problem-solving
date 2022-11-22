N = input()
A = list(map(int, input().split()))
B = list(map(int, input().split()))
A.sort()
B.sort()
result = 0
for i in range(int(N)):
    result += A[i] * B[-(i + 1)]
print(result)