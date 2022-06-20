package main

import (
	"fmt"
	"piscine"
)

func main() {
	const INT_MAX = int(^uint(0) >> 1)

	fmt.Println("n = 0   :", piscine.ActiveBits(0))
	fmt.Println("n = 1   :", piscine.ActiveBits(1))
	fmt.Println("n = 5   :", piscine.ActiveBits(5))
	fmt.Println("n = 7   :", piscine.ActiveBits(7))
	fmt.Println("INT_MAX :", piscine.ActiveBits(INT_MAX))
	fmt.Println("INT_MIN :", piscine.ActiveBits(^INT_MAX))
	//for itr := 0; itr < intSize; itr++ {
	//	fmt.Println(INT_MAX>>itr&1)
	//}
}
