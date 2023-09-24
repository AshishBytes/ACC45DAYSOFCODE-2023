package main

import "fmt"

func main() {
    var t, x int
    fmt.Scan(&t)
    for i := 0; i < t; i++ {
        fmt.Scan(&x)
        if x <= 15 {
            fmt.Println("Yes")
        } else {
            fmt.Println("No")
        }
    }
}
