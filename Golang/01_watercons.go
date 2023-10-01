package main

import "fmt"

func main() {
	var T, X int
	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		fmt.Scan(&X)
		if X >= 2000 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
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
