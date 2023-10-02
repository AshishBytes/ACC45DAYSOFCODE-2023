package main

import (
    "fmt"
)

func main() {
    var T int
    fmt.Scan(&T)
    for i := 0; i < T; i++ {
        var N, X int
        fmt.Scan(&N, &X)
        flips := min(X, N-X)
        fmt.Println(flips)
    }
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}


/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Github - AshishBytes
 * @INFO
 * LinkedIn - ashishbytes
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/