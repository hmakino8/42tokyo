package piscine

func Map(f func(int) bool, a []int) []bool {
	if f == nil {
		return nil
	}
	ret := make([]bool, sliceLen(a))
	for i, v := range a {
		ret[i] = f(v)
	}
	return ret
}

func sliceLen(a []int) (l int) {
	for range a {
		l++
	}
	return
}
