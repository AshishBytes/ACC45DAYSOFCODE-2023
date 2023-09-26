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
