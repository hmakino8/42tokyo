package piscine

func strLen(s string) int {
	l := 0
	for range s {
		l++
	}
	return l
}

func isDigits(r rune) int {
	if ('0' <= r && r <= '9') {
		return int(r - '0')
	}
	return -1
}

func isSign(r rune) (int, int) {
	if (r == '-') {
		return -1, 1
	}
	if (r == '+') {
		return 1, 1
	}
	return 1, 0
}
