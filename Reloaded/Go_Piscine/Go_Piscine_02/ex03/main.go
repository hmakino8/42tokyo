package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println("4,   3 :",piscine.RecursivePower(4, 3))
	fmt.Println("[original test]")
	fmt.Println("10, -1 :",piscine.RecursivePower(10, -1))
	fmt.Println(" 0,  0 :",piscine.RecursivePower(0, 0))
	fmt.Println("-2, 10 :",piscine.RecursivePower(-2, 10))
	fmt.Println("-2, 11 :",piscine.RecursivePower(-2, 11))
}
