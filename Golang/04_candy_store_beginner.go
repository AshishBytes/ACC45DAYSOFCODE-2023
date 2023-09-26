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
