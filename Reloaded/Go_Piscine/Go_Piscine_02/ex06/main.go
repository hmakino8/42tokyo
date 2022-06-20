package main

import (
	"fmt"
	"piscine"
)

func main() {
	for itr := 0; itr < 30; itr++ {
		if (piscine.IsPrime(itr) == true) {
			fmt.Printf("%d    : %t\n", itr, piscine.IsPrime(itr))
		}
	}
	fmt.Printf("・\n・\n・\n")
	fmt.Println("6703 :",piscine.IsPrime(6703))
	fmt.Printf("・\n・\n・\n")
	fmt.Println("8999 :",piscine.IsPrime(8999))
}
