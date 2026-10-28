n = int(input())
arr = list(map(int, input().split()))

count = 0

for i in arr:
    new = i+1
    if new in arr:
        count+=1

print(count)