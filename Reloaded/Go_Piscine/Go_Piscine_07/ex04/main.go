package main

import (
	"fmt"
	"piscine"
)

func main() {
	const INT_MAX = int(^uint(0) >> 1)
	const INT_MIN = ^INT_MAX

	a1 := []int{23, 28, 33, 34, 42, 42}
	a2 := []int{1, 3, 7, 8, 7, 9}
	a3 := []int{1, 8, 8, 9, 10, 10}
	a4 := []int{1, 1, 7, 8, 8, 9}
	a5 := []int{INT_MIN, 2, 3, INT_MAX - 1, INT_MAX - 2}
	a6 := []int{100, 67, 68, 67, 23, 1}
	a7 := []int{9, 10, 8, 7, 3, 1}
	a8 := []int{10, 10, 8, 7, 7, 1}
	a9 := []int{10, 9, 8, 7, 8, 1}
	a10 := []int{INT_MAX, INT_MAX - 1, 2, 2, INT_MIN}
	a11 := []int{1}

	fmt.Println("ascending OK")
	fmt.Printf("%#v ==> %v\n", a1, piscine.IsSorted(piscine.CompareNum, a1))
	fmt.Printf("%#v ==> %v\n", a3, piscine.IsSorted(piscine.CompareNum, a3))
	fmt.Printf("%#v ==> %v\n", a4, piscine.IsSorted(piscine.CompareNum, a4))
	fmt.Println("ascending NG")
	fmt.Printf("%#v ==> %v\n", a2, piscine.IsSorted(piscine.CompareNum, a2))
	fmt.Printf("%#v ==> %v\n\n", a5, piscine.IsSorted(piscine.CompareNum, a5))

	fmt.Println("descending OK")
	fmt.Printf("%#v ==> %v\n", a8, piscine.IsSorted(piscine.CompareNum, a8))
	fmt.Printf("%#v ==> %v\n", a10, piscine.IsSorted(piscine.CompareNum, a10))
	fmt.Printf("%#v ==> %v\n", a11, piscine.IsSorted(piscine.CompareNum, a11))
	fmt.Println("ascending NG")
	fmt.Printf("%#v ==> %v\n", a6, piscine.IsSorted(piscine.CompareNum, a6))
	fmt.Printf("%#v ==> %v\n", a7, piscine.IsSorted(piscine.CompareNum, a7))
	fmt.Printf("%#v ==> %v\n", a9, piscine.IsSorted(piscine.CompareNum, a9))
}
