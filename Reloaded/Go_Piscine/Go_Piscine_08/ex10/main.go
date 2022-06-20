package main

import (
	"fmt"
	"piscine"
)

func main() {
	a := []int{1, 2, 3, 1, 2, 3, 4}
	b := []int{1, 2, 3, 1, 4, 5, 2, 3, 4}
	c := []int{1, 2, 3, 1, 4, 5, 2, 3, 4, 5}
	unmatch1 := piscine.Unmatch(a)
	unmatch2 := piscine.Unmatch(b)
	unmatch3 := piscine.Unmatch(c)
	fmt.Println(unmatch1)
	fmt.Println(unmatch2)
	fmt.Println(unmatch3)
}
