package piscine

func AdvancedSortWordArr(a []string, f func(a, b string) int) {
	if f == nil {
		return
	}
	aLen := sliceLen(a)
	for i, _ := range a {
		for j := i + 1; j < aLen; j++ {
			if 0 < f(a[i], a[j]) {
				a[i], a[j] = a[j], a[i]
			}
		}
	}
}

func sliceLen(s []string) (l int) {
	for range s {
		l++
	}
	return l
}
