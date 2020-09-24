inp = input().split()
n = int(inp[0])
x = int(inp[1])
y = int(inp[2])
y = x + y
# n = int(input())
# x = int(input())
# y = int(input())
# y = x + y
# x, y = map(int, input().split())
# p = list(map(float, input().split()))
p = input().split();
p = [float(x) for x in p]
sum_x = 0.0
sum_y = 0.0
for i in range(x):
    sum_x += p[i]
for i in range(y):
    sum_y += p[i]
ma_x = 20 * [0]
ma_y = 20 * [0]
ma_x[0] = sum_x/x
ma_y[0] = sum_y/y
j = 1
for i in range(x, n):
    j += 1
    sum_x += (p[i] - p[i - x] )
    ma_x[j] = sum_x/x
j = 1
for i in range(y, n):
    j += 1
    sum_y += (p[i] - p[i - y])
    ma_y[j] = sum_y/y

above = 0
count = 0
if (ma_x[y - x] > ma_y[0] and above == 0):
    above = 1
if (ma_x[y - x] < ma_y[0]):
    above = -1

for i in range(1, n - y + 1):
    if (ma_x[y - x + i] < ma_y[i] and above == 1):
        count += 1
        above = -1
    elif(ma_x[y - x + i] > ma_y[i] and above == -1):
        count += 1
        above = 1
# print(count)
if(count > 0):
    print("Wrong", count)
elif(count == 0):
    print("Both are Right")
else:
    print("Right", count)

