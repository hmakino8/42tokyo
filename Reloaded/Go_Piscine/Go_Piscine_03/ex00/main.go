package main

import (
	"fmt"
	"ft"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	ft.PrintRune(piscine.FirstRune("Hello!"))
	ft.PrintRune(piscine.FirstRune("Salut!"))
	ft.PrintRune(piscine.FirstRune("Ola!"))
	ft.PrintRune('\n')
	fmt.Println("[original test]")
	ft.PrintRune(piscine.FirstRune("あいうえお"))
	ft.PrintRune(piscine.FirstRune(""))
}
