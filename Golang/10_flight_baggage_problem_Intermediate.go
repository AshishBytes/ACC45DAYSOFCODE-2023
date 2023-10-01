package main

import "fmt"

func main() {
	var T int
	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		var A, B, C, D, E int
		fmt.Scan(&A, &B, &C, &D, &E)
		if (A+B <= D && C <= E) || (B+C <= D && A <= E) || (A+C <= D && B <= E) {
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
