#include <iostream>
#include <vector>
#include <algorithm>

int max_watered_flowers(const std::vector<int>& heights) {
    int N = heights.size();
    std::vector<int> dp(N, 1);  // Each flower can be a starting point
    int max_length = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (heights[i] > heights[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        max_length = std::max(max_length, dp[i]);
    }

    return max_length;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> heights[i];
    }
    std::cout << max_watered_flowers(heights) << std::endl;
    return 0;
}