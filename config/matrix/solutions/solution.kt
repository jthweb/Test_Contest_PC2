fun matrixSum(A: Array<IntArray>, B: Array<IntArray>): Array<IntArray> {
    val M = A.size
    val N = A[0].size
    val result = Array(M) { IntArray(N) }
    
    for (i in 0 until M) {
        for (j in 0 until N) {
            result[i][j] = A[i][j] + B[i][j]
        }
    }
    
    return result
}

fun main() {
    val (M, N) = readLine()!!.split(" ").map { it.toInt() }
    val A = Array(M) { IntArray(N) }
    val B = Array(M) { IntArray(N) }

    for (i in 0 until M) {
        A[i] = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
    }

    for (i in 0 until M) {
        B[i] = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
    }

    val result = matrixSum(A, B)

    // Print the resulting matrix
    for (row in result) {
        println(row.joinToString(" "))
    }
}