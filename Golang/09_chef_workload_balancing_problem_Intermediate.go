package main

import "fmt"

func main() {
	var T int
	fmt.Scan(&T)
	for t := 0; t < T; t++ {
		var A [5]int
		var P int
		for i := 0; i < 5; i++ {
			fmt.Scan(&A[i])
		}
		fmt.Scan(&P)

		totalHours := 0
		for i := 0; i < 5; i++ {
			totalHours += A[i]
		}

		if totalHours*P > 120 {
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
