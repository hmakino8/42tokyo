package main

import (
	"fmt"
	"piscine"
)

func main() {
	result := []string{"a", "A", "1", "b", "B", "2", "c", "C", "3"}
	result2 := []string{}
	piscine.SortWordArr(result)
	piscine.SortWordArr(result2)
	fmt.Println(result)
	fmt.Println(result2)
}
