package main

import (
	"fmt"
	"piscine"
)

func main() {
	a := []int{23, 123, 1, 11, 55, 93}
	n := []int{}
	max := piscine.Max(a)
	empty := piscine.Max(n)
	fmt.Println(max)
	fmt.Println(empty)
}
