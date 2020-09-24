import numpy as np

first = input().split(' ')
n = int(first[0])
m = int(first[1])
p = int(first[2])

print(n, m, p)

a = []
b = []
for i in range(n):
    temp = [int(x) for x in input().split(' ')]
    a.append(temp)
    # print(temp)

for j in range(m):
    temp = [int(x) for x in input().split(' ')]
    b.append(temp)
    # print(temp)
a = np.array(a)
b = np.array(b)
print(np.concatenate((a, b), axis = 0))

