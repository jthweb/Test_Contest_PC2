fun maxWateredFlowers(heights: List<Int>): Int {
    val N = heights.size
    val dp = IntArray(N) { 1 }  // Each flower can be a starting point
    var maxLength = 1

    for (i in 0 until N) {
        for (j in 0 until i) {
            if (heights[i] > heights[j]) {
                dp[i] = maxOf(dp[i], dp[j] + 1)
            }
        }
        maxLength = maxOf(maxLength, dp[i])
    }

    return maxLength
}

fun main() {
    val N = readLine()!!.toInt()
    val heights = readLine()!!.split(" ").map { it.toInt() }
    println(maxWateredFlowers(heights))
}