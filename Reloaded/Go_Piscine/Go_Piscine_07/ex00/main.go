package main

import "piscine"

func main() {
	//const INT_MAX = int(^uint(0) >> 1)
	//const INT_MIN = ^INT_MAX

	//a := []int{INT_MAX, INT_MIN}
	//piscine.ForEach(piscine.PrintNbr, a)
	a := []int{1, 2, 3, 4, 5, 6}
	piscine.ForEach(piscine.PrintNbr, a)
}
