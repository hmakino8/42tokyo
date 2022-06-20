package piscine

func strLen(s string) (l int) {
	for range s {
		l++
	}
	return l
}

func isDigits(r rune) bool {
	return '0' <= r && r <= '9'
}

func isSign(r rune) (int, int) {
	switch r {
	case '-':
		return -1, 1
	case '+':
		return 1, 1
	default:
		return 1, 0
	}
}
