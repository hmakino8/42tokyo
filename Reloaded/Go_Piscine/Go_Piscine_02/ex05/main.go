package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println("4                   :",piscine.Sqrt(4))
	fmt.Println("9                   :",piscine.Sqrt(9))
	fmt.Println("[original test]")
	fmt.Println("4294967295          :",piscine.Sqrt(4294967295))
	fmt.Println("4294967296          :",piscine.Sqrt(4294967296))
	fmt.Println("9223372030926249001 :",piscine.Sqrt(9223372030926249001))
}
