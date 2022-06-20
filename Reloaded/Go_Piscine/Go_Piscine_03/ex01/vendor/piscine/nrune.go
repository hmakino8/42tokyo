package piscine

func NRune(s string, n int) rune {
	var r = []rune(s)

	for idx, rtn := range r {
		if idx == n-1 {
			return rtn
		}
	}
	return 0
}
