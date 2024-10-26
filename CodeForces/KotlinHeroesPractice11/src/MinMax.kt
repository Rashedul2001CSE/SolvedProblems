fun main() {
    val tt = readln().toInt()
    for (i in 1..tt) {
        val (num1, num2) = readln().split(' ').map { it.toInt() }
        println("${minOf(num1, num2)} ${maxOf(num1, num2)}")
    }
}
