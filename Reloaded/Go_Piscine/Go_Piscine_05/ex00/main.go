package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println("(5, 10) :", piscine.AppendRange(5, 10))
	fmt.Println("(10, 5) :", piscine.AppendRange(10, 5))
	fmt.Println("[original test]")
	fmt.Println("(10, 10) :", piscine.AppendRange(10, 10))
	fmt.Println("(-10, -5) :", piscine.AppendRange(-10, -5))
}
