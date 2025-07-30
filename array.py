def access(matrix, row, col):
    if row > len(matrix[0])-1 or col > len(matrix)-1:
        return "Invalid Row and column"
    
    return matrix[row][col]

def search(matrix, val):
    row = len(matrix[0])
    col = len(matrix)
    for r in range(row):
        for c in range(col):
            if matrix[r][c] == val:
                return (r+1,c+1)
    return -1

def rotate_90(matrix):
    pass

mat = [[1,2,3],[4,5,6],[7,8,9]]
print(rotate_90(mat))