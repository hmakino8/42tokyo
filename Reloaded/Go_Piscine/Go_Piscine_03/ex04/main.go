package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println(piscine.Compare("Hello!", "Hello!"))
	fmt.Println(piscine.Compare("Salut!", "lut!"))
	fmt.Println(piscine.Compare("Ola!", "Ol"))
	fmt.Println("[original test]")
	fmt.Println(piscine.Compare("", ""))
	fmt.Println(piscine.Compare("", "H"))
	fmt.Println(piscine.Compare("S", ""))
	fmt.Println(piscine.Compare("あbう", "あbう"))
	fmt.Println(piscine.Compare("あいう", "いあう"))
	fmt.Println(piscine.Compare("あbう", "あaう"))
}
