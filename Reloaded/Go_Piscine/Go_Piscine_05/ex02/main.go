package main

import (
	"fmt"
	"piscine"
)

func main() {
	var a string

	fmt.Println("[PDF test]")
	test := []string{"Hello", "how", "are", "you?"}
	fmt.Println(test)
	fmt.Println(piscine.ConcatParams(test))
	fmt.Println("[original test]")
	test2 := []string{"", a, "are", "you?"}
	fmt.Println(test2)
	fmt.Println(piscine.ConcatParams(test2))
	test3 := []string{""}
	fmt.Println(test3)
	fmt.Println(piscine.ConcatParams(test3))
	var test4 []string
	fmt.Println(test4)
	fmt.Println(piscine.ConcatParams(test4))
}
