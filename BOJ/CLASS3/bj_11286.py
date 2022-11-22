# https://www.acmicpc.net/problem/11286

_, *C = open(0).read().split()
B = [0]
for N in C:
    N = int(N)
    if N == 0:
        if len(B) == 1:
            print(0)
            continue
        else:
            print(B[1])
            B[1] = B[-1]
            B.pop()
            i = 1
            while True:
                j = i * 2
                if (j + 1 < len(B)) and abs(B[j]) >= abs(B[j + 1]):
                    if abs(B[j]) == abs(B[j + 1]):
                        if B[j] > B[j + 1]:
                            j += 1
                    else:
                        j += 1
                if j >= len(B):
                    break
                elif abs(B[j]) == abs(B[i]):
                    if B[j] > B[i]:
                        break
                elif abs(B[j]) > abs(B[i]):
                    break

                B[j], B[i] = B[i], B[j]
                i = j
    else:
        B.append(N)
        i = len(B) - 1
        while i > 1:
            if abs(B[i // 2]) == abs(B[i]):
                if B[i // 2] > B[i]:
                    B[i // 2], B[i] = B[i], B[i // 2]
            elif abs(B[i // 2]) > abs(B[i]):
                B[i // 2], B[i] = B[i], B[i // 2]
            else:
                break
            i //= 2
