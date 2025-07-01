def matrix_sum(A, B):
    M = len(A)
    N = len(A[0])
    result = [[0] * N for _ in range(M)]
    
    for i in range(M):
        for j in range(N):
            result[i][j] = A[i][j] + B[i][j]
    
    return result

# Input reading
M, N = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(M)]
B = [list(map(int, input().split())) for _ in range(M)]

result = matrix_sum(A, B)

# Print the resulting matrix
for row in result:
    print(" ".join(map(str, row)))