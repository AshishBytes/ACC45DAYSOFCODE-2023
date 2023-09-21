package main

import "fmt"

func main() {
    var t, x, y int
    fmt.Scan(&t)
    for i := 0; i < t; i++ {
        fmt.Scan(&x, &y)
        if x >= y {
            fmt.Println(y)
        } else {
            fmt.Println(x + 2*(y-x))
        }
    }
}
