package main

import (
	"fmt"
	"piscine"
)

func main() {
	s := []int{5,4,3,2,1,0}
	s1 := []int{4,2,9,3,5,1}
	s2 := []int{1239,4098,4,49,1240,4958,4984,4802,2098,390,5924}
	piscine.SortIntegerTable(s)
	piscine.SortIntegerTable(s1)
	piscine.SortIntegerTable(s2)
	//PDF test
	fmt.Println("{5,4,3,2,1,0} =",s)
	//original test
	fmt.Println("{4,2,9,3,5,1} =",s1)
	fmt.Println("{1239,4098,4,49,1240,4958,4984,4802,2098,390,5924} =",s2)
}
