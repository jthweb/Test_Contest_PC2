fun main() {
    var sum = 0

    // Read lines from standard input
    generateSequence(::readLine).forEach { line ->
        val num = line.toInt()
        if (num > 0) {
            sum += num
        }
    }

    println("The sum of the integers is $sum")
}