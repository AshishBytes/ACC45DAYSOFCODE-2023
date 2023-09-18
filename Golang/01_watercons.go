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
