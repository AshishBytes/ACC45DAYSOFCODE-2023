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
