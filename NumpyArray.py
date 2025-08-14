import numpy as np
l = [1,2,3,4,5,6]
arr = np.array(l)
print(arr)
def insert(arr, val):
    return np.append(arr, val)

def delete(arr, val):
    return arr[arr != val]

def search(arr, val):
    i = np.where(arr == val)
    if i[i(0)]:
        return i[0][0] + 1 
    return -1

