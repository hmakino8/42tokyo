package piscine

func Max(a []int) int {
	aSize := sliceSize(a)

	if aSize == 0 {
		return 0
	}
	max := a[0]
	for _, elem := range a {
		if max < elem {
			max = elem
		}
	}
	return max
}

func sliceSize(a []int) (size int) {
	for range a {
		size++
	}
	return
}
