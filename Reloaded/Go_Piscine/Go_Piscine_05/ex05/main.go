package main

import (
	"fmt"
	"piscine"
)

func main() {
	result := piscine.ConvertBase("101011", "01", "0123456789")
	fmt.Println("101011 (Binary to Decimal)", result)
	result2 := piscine.ConvertBase("7F", "0123456789ABCDEF", "0123456789")
	fmt.Println("7F (Hex to Decimal)", result2)
	result3 := piscine.ConvertBase("10101110", "01", "0123456789ABCDEF")
	fmt.Println("10101110 (Binary to Hex)", result3)
}
