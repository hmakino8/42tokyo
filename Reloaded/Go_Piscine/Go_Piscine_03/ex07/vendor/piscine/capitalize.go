package piscine

func Capitalize(s string) string {
	rs := []rune(s)
	rsLen := strLen(rs)

	for idx := 0; idx < rsLen; idx++ {
		locate := idx
		for ; idx < rsLen && isAlNum(rs[idx]); idx++ {
			rs[idx] = toLower(rs[idx])
		}
		rs[locate] = toUpper(rs[locate])
	}
	return string(rs)
}

func isDigit(r rune) bool {
	return '0' <= r && r <= '9'
}

func isLower(r rune) bool {
	return 'a' <= r && r <= 'z'
}

func isUpper(r rune) bool {
	return 'A' <= r && r <= 'Z'
}

func isAlpha(r rune) bool {
	return isLower(r) || isUpper(r)
}

func isAlNum(r rune) bool {
	return isDigit(r) || isAlpha(r)
}

func toUpper(r rune) rune {
	if isLower(r) {
		r += 'A' - 'a'
	}
	return r
}

func toLower(r rune) rune {
	if isUpper(r) {
		r += 'a' - 'A'
	}
	return r
}

func strLen(r []rune) int {
	l := 0

	for range r {
		l++
	}
	return l
}
