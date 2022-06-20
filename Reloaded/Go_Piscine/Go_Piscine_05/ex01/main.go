package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println("(5, 10) :", piscine.MakeRange(5, 10))
	fmt.Println("(10, 5) :", piscine.MakeRange(10, 5))
	fmt.Println("[original test]")
	fmt.Println("(10, 10) :", piscine.MakeRange(10, 10))
	fmt.Println("(-10, -5) :", piscine.MakeRange(-10, -5))
}
