def Merge_Sort(A):
    length = len(A)
    if length==1:
        return A
    else:
        d = int(len(A)/2)
        A1 = A[0:d]
        A2 = A[d:]
        A1 = Merge_Sort(A1)
        A2 = Merge_Sort(A2)
        return Merge_operation(A1,A2,length)

def Merge_operation(A1,A2,length):
    A = []
    for i in range(length):
        if A1[0] < A2[0]:
            A.append(A1[0])
            if len(A1) == 1:
                A.extend(A2)
                return A
            else:
                A1 = A1[1:]
        else:
            A.append(A2[0])
            if len(A2) == 1:
                A.extend(A1)
                return A
            else:
                A2 = A2[1:]
    return A


A = [9,8,7,6,5,4,3,2,1]
A = Merge_Sort(A)
print(A)