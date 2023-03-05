def Iterative_Binary_Search(A,v,n):
    ## A[1...n] is the sorted array
    ## v is the query number
    ## n is the length of the array
    l = 0
    r = n -1
    while l <= r:
        m = int(((l+r)/2))
        if A[m] == v:
            return m
        elif A[m] < v:
            l = m + 1
        else:
            r = m -1
    return None

def Recursive_Binary_search(A,v,l,r):
    ## A[1...n] is the sorted array
    ## v is the query number
    ## l,r are left and right bounds, equal 0 and n-1 in initialization
    if l > r:
        return None
    m = int(((l + r) / 2))
    if A[m] == v:
        return m
    elif A[m] < v:
        return Recursive_Binary_search(A,v,m+1,r)
    else:
        return Recursive_Binary_search(A,v,l,m-1)

def Search_2_elems_equal_x(S,x,n):
    for i in S:
        pos = Iterative_Binary_Search(S,x-i,n)
        if pos != None:
            return i, pos
    return None


A = [1,3,4,4,5,6,6,7,9,9.7,10,11,11.3,14]
v = 9
print(Iterative_Binary_Search(A,v,len(A)))
print(Recursive_Binary_search(A,v,0,len(A)-1))

S = [1,2,3,4,5,6,7,8,9]
x = 6
print(Search_2_elems_equal_x(S,x,len(S)))
