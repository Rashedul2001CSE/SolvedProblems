fun main() {
    for (i in 0..readln().toInt()) {

        val str = readln()
        var cnt = 0
        for (c in str) {
            if (c == '1') {
                cnt += 1
            }
        }
        if (cnt == str.length || (cnt == 2 && str[0] == '1' && str[str.length - 1] == '1')) {
            println("Yes")
        } else {
            println("No")
        }
    }
}