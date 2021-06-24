x, y = map(int, input().split())
days = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
date = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
L = 0
for i in range(0, x - 1):
    L = L + date[i]
L += y-1
L %= 7
print(days[L])
