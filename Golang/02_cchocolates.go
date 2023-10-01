package main

import "fmt"

func main() {
	var T, X, Y, Z int
	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		fmt.Scan(&X, &Y, &Z)
		totalRupees := X*5 + Y*10
		maxChocolates := totalRupees / Z
		fmt.Println(maxChocolates)
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
