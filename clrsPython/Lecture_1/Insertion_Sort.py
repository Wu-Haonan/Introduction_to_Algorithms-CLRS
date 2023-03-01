def Insertion_Sort(A):
    # A is the input array
    # Insertion_Sort function can permutate A as a nondecreasing array
    n = len(A) # length of A
    for i in range(1,n):
        key = A[i]
        j = i-1
        while j >= 0 and key < A[j]: # move key until key not less than A[j]
            A[j+1] = A[j] # let the jth element move backward
            j = j - 1
        A[j+1] = key
    return A

def Insertion_Sort_nonincreasing(A):
    # A is the input array
    # Insertion_Sort function can permutate A as a nonincreasing array
    n = len(A)  # length of A
    for i in range(1, n):
        key = A[i]
        j = i - 1
        while j>=0 and key >= A[j]: # move key until key not bigger than A[j]
            A[j+1] = A[j]
            j = j -1
        A[j+1] = key
    return A

def Insertion_Sort_reverse(A):
    # reverse way to implement Insertion_Sort
    # A is the input array
    # Insertion_Sort function can permutate A as a nondecreasing array
    n = len(A) # length of A
    j = n - 1
    while j >= 0:
        key = A[j]
        i = j + 1
        while i <= (n-1) and key >= A[i]: # move forward until not bigger than A[i]
            A[i-1] = A[i]
            i +=1
        A[i-1] = key
        j = j -1
    return A
