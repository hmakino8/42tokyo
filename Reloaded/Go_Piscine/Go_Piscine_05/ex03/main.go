package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Printf("%#v\n", piscine.SplitWhiteSpaces("Hello    how are you?           "))
	fmt.Println("[original test]")
	fmt.Printf("%#v\n", piscine.SplitWhiteSpaces("\nabc \n\t d\tef\t\ng "))
	fmt.Printf("%#v\n", piscine.SplitWhiteSpaces("a bc\n \tdef\tg "))
	fmt.Printf("%#v\n", piscine.SplitWhiteSpaces(""))
	fmt.Printf("%#v\n", piscine.SplitWhiteSpaces("abcdefg"))
}
