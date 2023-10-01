package main

import (
    "fmt"
)

func main() {
    var T int
    fmt.Scan(&T)
    for i := 0; i < T; i++ {
        var X, Y, Z int
        fmt.Scan(&X, &Y, &Z)
        if X == Y+Z || Y == Z+X || Z == X+Y {
            fmt.Println("yes")
        } else {
            fmt.Println("no")
        }
    }
}

/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Github - AshishBytes
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/
