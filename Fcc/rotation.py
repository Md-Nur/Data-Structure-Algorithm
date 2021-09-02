def rotation(a,b):
    if len(a)!=len(b):
        return False
    value = a[0]
    index = 0
    l = len(a)
    for i in range(l):
        if (b[i]==value):
            index = i
            break
    
    if index == 0:
        return False
    
    for j in range(l):
        value = b[(index+j)%l]
        if a[j]!=value:
            return False
    return True

print(rotation([1,2,3,4,5,6,7],[4,5,6,7,1,2,3]))
