def frequent(arr):
    count = {}
    maxCount = 0
    maxItem = None
    for i in arr:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
        if count[i] > maxCount:
            maxCount = count[i]
            maxItem = i
    return maxItem


print(frequent([-1, 3, 3, 3, 2, -1, -1, -1,0]))
