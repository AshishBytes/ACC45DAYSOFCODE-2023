package main

import (
    "fmt"
)

func main() {
    var T int
    fmt.Scan(&T)
    for i := 0; i < T; i++ {
        var N, M int
        fmt.Scan(&N, &M)
        if N%(2*M) == 0 {
            fmt.Println("Yes")
        } else {
            fmt.Println("No")
        }
    }
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