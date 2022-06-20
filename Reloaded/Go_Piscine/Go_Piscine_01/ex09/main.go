package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("12345         =",piscine.BasicAtoi2("12345"))
	fmt.Println("0000000012345 =",piscine.BasicAtoi2("0000000012345"))
	fmt.Println("012 345       =",piscine.BasicAtoi2("012 345"))
	fmt.Println("Hello World   =",piscine.BasicAtoi2("Hello World!"))
}
