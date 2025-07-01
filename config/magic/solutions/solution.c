#include <stdio.h>
#include <stdlib.h>

int max_watered_flowers(int* heights, int N) {
    int* dp = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        dp[i] = 1;  // Each flower can be a starting point
    }
    int max_length = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (heights[i] > heights[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if (max_length < dp[i]) {
            max_length = dp[i];
        }
    }

    free(dp);
    return max_length;
}

int main() {
    int N;
    scanf("%d", &N);
    int* heights = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }
    printf("%d\n", max_watered_flowers(heights, N));
    free(heights);
    return 0;
}