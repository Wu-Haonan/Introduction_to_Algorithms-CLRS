def Iterative_Unimodal_Search(A):
    ## A[1...n] is a unimodal array
    l = 0
    r = len(A) - 1
    m = int(((l+r)/2))
    while A[m] < A[m-1] or A[m] < A[m+1]:
        if A[m] < A[m-1]:
            r = m-1
        else:
            l = m+1
        m = int(((l + r) / 2))
    return A[m]

def Recursive_Unimodal_Search(A,l,r):
    ## A[1...n] is a unimodal array
    m = int(((l + r) / 2))
    if A[m] > A[m-1] and A[m] > A[m+1]:
        return A[m]
    else:
        if A[m] < A[m-1]:
            return Recursive_Unimodal_Search(A, l, m-1)
        else:
            return Recursive_Unimodal_Search(A, m+1, r)


A = [1,2,8,9,7,6,5,4,3,2,1]
print(Iterative_Unimodal_Search(A))
print(Recursive_Unimodal_Search(A,0,len(A)-1))