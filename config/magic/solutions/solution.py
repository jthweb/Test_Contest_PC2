def max_watered_flowers(heights):
    N = len(heights)
    dp = [1] * N  # Each flower can be a starting point
    max_length = 1

    for i in range(N):
        for j in range(i):
            if heights[i] > heights[j]:
                dp[i] = max(dp[i], dp[j] + 1)
        max_length = max(max_length, dp[i])
    
    return max_length

# Input reading
N = int(input())
heights = list(map(int, input().split()))
print(max_watered_flowers(heights))