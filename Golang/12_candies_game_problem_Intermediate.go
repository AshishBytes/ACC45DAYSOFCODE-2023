package main

import "fmt"

func main() {
	var T int
	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		var A, B int
		fmt.Scan(&A, &B)
		moves := 1
		for {
			if moves%2 == 1 {
				A -= moves
				if A < 0 {
					fmt.Println("Bob")
					break
				}
			} else {
				B -= moves
				if B < 0 {
					fmt.Println("Limak")
					break
				}
			}
			moves++
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
