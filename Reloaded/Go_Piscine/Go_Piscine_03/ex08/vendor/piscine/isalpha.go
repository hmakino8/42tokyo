package piscine

func IsAlpha(s string) bool {
	for _, r := range s {
		if !isAlNum(r) {
			return false
		}
	}
	return true
}

func isDigit(r rune) bool {
	return '0' <= r && r <= '9'
}

func isAlpha(r rune) bool {
	return 'a' <= r && r <= 'z' || 'A' <= r && r <= 'Z'
}

func isAlNum(r rune) bool {
	return isDigit(r) || isAlpha(r)
}
