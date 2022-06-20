package main

import (
	"fmt"
	"piscine"
)

func main() {
	for itr := 0; itr < 10; itr++ {
		fmt.Printf("%d    : %d\n", itr, piscine.FindNextPrime(itr))
	}
	fmt.Printf("・\n・\n・\n")
	fmt.Println("6705 :",piscine.FindNextPrime(6705))
	fmt.Printf("・\n・\n・\n")
	fmt.Println("8999 :",piscine.FindNextPrime(8999))
	fmt.Printf("・\n・\n・\n")
	fmt.Println("32749 :",piscine.FindNextPrime(32749))
	fmt.Println("32771 :",piscine.FindNextPrime(32771)) //over Int16.MaxValue
}
