n = int(input())

yr = 0

p = 100

while p<n:
    p += p//100
    yr+=1

print(yr)
