object Main {

    def lock(): Unit = {

        var lock: String = "569"

        for (i <- 0 to 9) {
            for (j <- 0 to 9) {
                for (k <- 0 to 9) {

                    var i2: String = i.toString
                    var j2: String = j.toString
                    var k2: String = k.toString

                    var output: String = i2 + j2 + k2

                    println(output)

                    if (lock == output) {
                        println("lock combination found: " + output)
                        return
                    }
                }
            }
        }
        println("combination not found")
        return
    }
    
    def main(args: Array[String]): Unit = {
        lock()
    }
}
