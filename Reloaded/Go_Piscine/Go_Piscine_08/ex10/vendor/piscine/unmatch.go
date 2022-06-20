package piscine

func Unmatch(a []int) int {
	for _, i := range a {
		if matchCount(a, i)%2 == 1 {
			return i
		}
	}
	return -1
}

func matchCount(a []int, i int) (cnt int) {
	for _, j := range a {
		if i == j {
			cnt++
		}
	}
	return
}
