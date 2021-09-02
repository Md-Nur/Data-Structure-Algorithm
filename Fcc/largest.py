def largest(arr):
    if len(arr)==0:
        return print("To Small")
    sumation= maximum = arr[0]

    for i in arr[1:]:
        if i > maximum:
            sumation+=i
            maximum = i

    return sumation

print(largest([7,1,2,-1,3,4,10,-12,3,21,-19]))