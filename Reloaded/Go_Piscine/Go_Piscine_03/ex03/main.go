package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("[PDF test]")
	fmt.Println(piscine.Index("Hello!", "l"))
	fmt.Println(piscine.Index("Salut!", "alu"))
	fmt.Println(piscine.Index("Ola!", "hOl"))
	fmt.Println("[original test]")
	fmt.Println(piscine.Index("This function is similar to strstr in libc", "strstr"))
	fmt.Println(piscine.Index("あいうえお", "あいうえお"))
	fmt.Println(piscine.Index("あいうえお", "うえ"))
	fmt.Println(piscine.Index("あいうえお", ""))
	fmt.Println(piscine.Index("", ""))
	fmt.Println(piscine.Index("abc", ""))
	fmt.Println(piscine.Index("abcde", "de"))
}
