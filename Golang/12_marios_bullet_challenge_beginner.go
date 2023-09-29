package main

import "fmt"

func main() {
    var t int
    fmt.Scan(&t)
    for i := 0; i < t; i++ {
        var x, y, z, a int
        fmt.Scan(&x, &y, &z)
        a = y / x
        if a < z {
            fmt.Println(z - a)
        } else {
            fmt.Println(0)
        }
    }
}
