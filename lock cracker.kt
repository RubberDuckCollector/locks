fun lock() {

    var lock = "465"

    for (i in 0..9) {
        for (j in 0..9) {
            for (k in 0..9) {

                var i2 = i.toString()
                var j2 = j.toString()
                var k2 = k.toString()

                var output = i2 + j2 + k2

                println(output)

                if (output == lock) {
                    println("lock combination found: " + output)
                    return
                }
            }
        }
    }
    println("combination not found")
}

fun main(args: Array<String>) {
    lock()
}
