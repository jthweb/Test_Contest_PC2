fun detectTaxEvasion(testCases: List<Pair<Int, Int>>): List<String> {
    val results = mutableListOf<String>()
    for ((reported, actual) in testCases) {
        if (reported < 0.8 * actual) {
            results.add("Evasion")
        } else {
            results.add("No Evasion")
        }
    }
    return results
}

fun main() {
    val T = readLine()!!.toInt()
    val testCases = List(T) {
        val (reported, actual) = readLine()!!.split(" ").map { it.toInt() }
        Pair(reported, actual)
    }

    val results = detectTaxEvasion(testCases)

    for (result in results) {
        println(result)
    }
}