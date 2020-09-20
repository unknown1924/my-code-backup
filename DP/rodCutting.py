import sys
def max(a, b):
    if a > b:
        return a
    return b

def rod(arr, n):
    if n <= 0:
        return 0
    profit = -sys.maxsize-1 
    for i in range(n):
        profit = max(profit, arr[i]+rod(arr, n-i-1))
    return profit


arr = [1, 5, 8, 9, 10, 17, 17, 20] 
print(rod(arr,len(arr)))
