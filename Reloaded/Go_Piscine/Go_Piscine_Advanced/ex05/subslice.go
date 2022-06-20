package main

//import "fmt"

func subSlice(slice []int, begin int, length int, capacity int) []int {
	const INT_MAX = int(^uint(0) >> 1)
	sLen := len(slice)

	if sLen <= 0 || length <= 0 || begin < 0 || sLen <= begin || INT_MAX-length < begin {
		return []int{}
	}
	cpyEnd := begin + length
	if sLen < cpyEnd {
		cpyEnd = sLen
	}
	if capacity < length {
		capacity = length
	}
	sSub := make([]int, length, capacity)
	copy(sSub, slice[begin:cpyEnd])
	return sSub
}

//func main() {
//	var orig = []int{0, 1, 2, 3, 4, 5}
//	var ret []int
//
//	fmt.Println("[PDF test]")
//	ret = subSlice(orig, 0, 3, 3)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, 2, 7, 10)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, 2, 7, 3)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	fmt.Println("[original test]")
//	ret = subSlice(orig, 5, 2, 3)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, 0, 1, -1)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, 6, 7, 3)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, -1, 5, 88)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//	ret = subSlice(orig, 0, -5, 88)
//	fmt.Printf("ret = %v, len = %d, cap = %d\n", ret, len(ret), cap(ret))
//}
