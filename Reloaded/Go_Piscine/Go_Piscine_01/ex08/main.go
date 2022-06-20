package main

import (
	"fmt"
	"piscine"
)

func main() {
	fmt.Println("12345         =",piscine.BasicAtoi("12345"))
	fmt.Println("0000000012345 =",piscine.BasicAtoi("0000000012345"))
	fmt.Println("000000        =",piscine.BasicAtoi("000000"))
}
