start, end = input().split()
apple, orange = input().split()
numOfApple, numOfOrange = input().split()
start = int(start)
end = int(end)
apple = int(apple)
orange = int(orange)
numOfApple = int(numOfApple)
numOfOrange = int(numOfOrange)
aCount = 0
oCount = 0

a = input().split()
b = input().split()
for i in a:
    if (start <= (apple+int(i)) <= end):
        aCount += 1

for j in b:
    if (start <= (orange+int(j)) <= end):
        oCount += 1

print(aCount)
print(oCount)
