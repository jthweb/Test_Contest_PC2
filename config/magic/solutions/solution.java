import java.util.Scanner;

public class MagicGarden {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] heights = new int[N];
        
        for (int i = 0; i < N; i++) {
            heights[i] = scanner.nextInt();
        }
        
        System.out.println(maxWateredFlowers(heights));
    }

    public static int maxWateredFlowers(int[] heights) {
        int N = heights.length;
        int[] dp = new int[N];
        int maxLength = 1;

        for (int i = 0; i < N; i++) {
            dp[i] = 1; // Each flower can be a starting point
            for (int j = 0; j < i; j++) {
                if (heights[i] > heights[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            maxLength = Math.max(maxLength, dp[i]);
        }
        return maxLength;
    }
}