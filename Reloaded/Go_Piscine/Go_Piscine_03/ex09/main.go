package main

import (
	"fmt"
	"piscine"
)

func main() {
	//PDF test
	fmt.Println(piscine.IsNumeric("010203"))
	fmt.Println(piscine.IsNumeric("01,02,03"))
}
