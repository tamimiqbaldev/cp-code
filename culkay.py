t = int(input())
for _ in range(t):
    n = int(input())
    a = [0]*n
    for j in range(0, n, 1):
        a[j] = int(input())
    hgh = 0
    low = 0
    for i in range(0, n-1, 1):
        if a[i+1]>a[i]:
            hgh+=1
        elif a[i+1]<a[i]:
            low += 1
    print(hgh, low)

