def pairSumArray(arr,k):
    if len(arr)<2:
        return "Too small array"
    seen = set()
    output = set()

    for n in arr:
        target =  k - n
        if target not in seen:
            seen.add(n)
        else:
            output.add((min(target,n),max(target,n)))

    print('\n'.join(map(str,list(output))))

pairSumArray([1,3,2,2],4)