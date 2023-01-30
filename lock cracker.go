package main

import (
	"fmt"
    "strconv"
)

func lock() {
    lock := "400"

    for i := int64(0); i < 10; i++ {
        for j := int64(0); j < 10; j++ {
            for k := int64(0); k < 10; k++ {
                
                i2 := strconv.FormatInt(i, 10)
                j2 := strconv.FormatInt(j, 10)
                k2 := strconv.FormatInt(k, 10)

                output := i2 + j2 + k2

                fmt.Println(output)

                if output == lock {
                    fmt.Println("lock combination lock found:", output)
                    return
                }
            }
        }
    }
    fmt.Println("combination not found")
}


func main() {
	fmt.Println("Hello, World!")

    lock()
    
}
