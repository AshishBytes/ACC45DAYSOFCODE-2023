package main

import "fmt"

func main() {
    var T, X, Y int
    fmt.Scan(&T)
    for i := 0; i < T; i++ {
        fmt.Scan(&X, &Y)
        extraChairs := 0
        if X > Y {
            extraChairs = X - Y
        }
        fmt.Println(extraChairs)
    }
}