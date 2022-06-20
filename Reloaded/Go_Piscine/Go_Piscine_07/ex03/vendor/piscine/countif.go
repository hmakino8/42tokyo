package piscine

func CountIf(f func(string) bool, a []string) int {
	if f == nil {
		return 0
	}
	var cnt int
	for _, v := range a {
		if f(v) {
			cnt++
		}
	}
	return cnt
}
