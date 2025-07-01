fun countUniqueColors(colors: List<Int>): Int {
    return colors.toSet().size
}

fun main() {
    val N = readLine()!!.toInt()
    val colors = readLine()!!.split(" ").map { it.toInt() }
    println(countUniqueColors(colors))
}