def commonElement(ar1,ar2):
    return sorted(set(ar1).intersection(set(ar2)))

print(commonElement([1,3,4,6,7,9],[1,2,4,5,9,10]))