package main

import (
	"fmt"
	"ft"
	"piscine"
)

func main() {
	const INT_MAX = int(^uint(0) >> 1)
	const INT_MIN = ^INT_MAX

	fmt.Println("[PDF test]")
	piscine.PrintNbrBase(125, "0123456789")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(-125, "01")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(125, "0123456789ABCDEF")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(-125, "choumi")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(125, "aa")
	ft.PrintRune('\n')
	fmt.Println("[original test]")
	piscine.PrintNbrBase(1, "a")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(-125, "ｃｈｏｕｍｉ")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(INT_MAX, "0123456789")
	ft.PrintRune('\n')
	piscine.PrintNbrBase(INT_MIN, "0123456789")
	ft.PrintRune('\n')
}
