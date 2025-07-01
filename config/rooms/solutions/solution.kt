fun main() {
    val n = readLine()!!.toInt()
    val m = Math.ceil(n / 4.0).toBigDecimal().setScale(1, java.math.RoundingMode.UP)
    println(m)
}