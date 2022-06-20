package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println(piscine.AtoiBase("125", "0123456789"))
	fmt.Println(piscine.AtoiBase("1111101", "01"))
	fmt.Println(piscine.AtoiBase("7D", "0123456789ABCDEF"))
	fmt.Println(piscine.AtoiBase("uoi", "choumi"))
	fmt.Println(piscine.AtoiBase("bbbbbab", "-ab"))
	fmt.Println("[original test]")
	fmt.Println(piscine.AtoiBase("bbbbbab", "b"))
	fmt.Println(piscine.AtoiBase("ｕｏｉ", "ｃｈｏｕｍｉ"))
	fmt.Println(piscine.AtoiBase("9999999999999999999999", "0123456789"))
}
