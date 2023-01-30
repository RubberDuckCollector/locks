func lock() {

    let lock = "367"

    for i in 0...9 {
        for j in 0...9 {
            for k in 0...9 {

                let i2 = String(i)
                let j2 = String(j)
                let k2 = String(k)

                let output = i2 + j2 + k2

                print(output)

                if output == lock {
                    print("lock combination found: " + output)
                    return
                }
            }
        }
    }
    print("combination not found")
}

lock()
