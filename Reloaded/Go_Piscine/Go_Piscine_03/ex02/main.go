package main

import (
	"fmt"
	"ft"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	ft.PrintRune(piscine.LastRune("Hello!"))
	ft.PrintRune(piscine.LastRune("Salut!"))
	ft.PrintRune(piscine.LastRune("Ola!"))
	ft.PrintRune('\n')
	fmt.Println("[original test]")
	ft.PrintRune(piscine.LastRune("あいうえお"))
}
