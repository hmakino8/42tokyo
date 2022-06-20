package main

import (
	"fmt"
	"ft"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	ft.PrintRune(piscine.NRune("Hello!", 3))
	ft.PrintRune(piscine.NRune("Salut!", 2))
	ft.PrintRune(piscine.NRune("Bye!", -1))
	ft.PrintRune(piscine.NRune("Bye!", 5))
	ft.PrintRune(piscine.NRune("Ola!", 4))
	ft.PrintRune('\n')
	fmt.Println("[original test]")
	ft.PrintRune(piscine.NRune("あいうえお", 4))
}
