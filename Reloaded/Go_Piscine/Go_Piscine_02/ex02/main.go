package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println(" 4, 3  :",piscine.IterativePower(4, 3))
	fmt.Println("[original test]")
	fmt.Println(" 0, 0  :",piscine.IterativePower(0, 0))
	fmt.Println("-2, 10 :",piscine.IterativePower(-2, 10))
	fmt.Println("-2, 11 :",piscine.IterativePower(-2, 11))
}
