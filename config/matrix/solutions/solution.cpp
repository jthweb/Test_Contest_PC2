#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrix_sum(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int M = A.size();
    int N = A[0].size();
    std::vector<std::vector<int>> result(M, std::vector<int>(N, 0));
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    
    return result;
}

int main() {
    int M, N;
    std::cin >> M >> N;
    std::vector<std::vector<int>> A(M, std::vector<int>(N));
    std::vector<std::vector<int>> B(M, std::vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> B[i][j];
        }
    }

    std::vector<std::vector<int>> result = matrix_sum(A, B);

    // Print the resulting matrix
    for (const auto& row : result) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}